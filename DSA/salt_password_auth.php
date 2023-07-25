<?php
require 'db_config.php';

// Set headers to allow cross-origin requests (CORS)
header("Access-Control-Allow-Origin: *");
header("Content-Type: application/json; charset=UTF-8");
header("Access-Control-Allow-Methods: POST, GET, PUT, DELETE");
header("Access-Control-Max-Age: 3600");
header("Access-Control-Allow-Headers: Content-Type, Access-Control-Allow-Headers, Authorization, X-Requested-With");

// Endpoint to handle login requests
if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $username = $_POST['username'];
    $password = $_POST['password'];

    // Your login validation logic here (e.g., comparing credentials with the database)
    // For example, you might have a users table with username and hashed password columns
    $sql = "SELECT passwordhash, salt FROM Attendance_login WHERE Rollno = ?";
    $stmt = $connection->prepare($sql);
    $stmt->bind_param("s", $username);
    $stmt->execute();
    $stmt->store_result();

    if ($stmt->num_rows === 1) {
        // User exists, retrieve password and salt
        $stmt->bind_result($hashedPassword, $salt);
        $stmt->fetch();

        // Append the received salt to the input password
        $saltedPassword = $password . $salt;

        // Hash the salted password using the same method you used during user registration
        // For example, if you used sha256:
        $hashedInputPassword = hash('sha256', $saltedPassword);
            echo json_encode(["hased"=>$hashedInputPassword , "data"=>$hashedPassword]);
        // Check if the hashed input password matches the stored hashed password
        if ($hashedInputPassword === $hashedPassword) {
            // Login successful, proceed to fetch attendance records
            $attendanceSql = "SELECT * FROM Attendance WHERE RollNo = ?";
            $attendanceStmt = $connection->prepare($attendanceSql);
            $attendanceStmt->bind_param("s", $username);
            $attendanceStmt->execute();
            $attendanceResult = $attendanceStmt->get_result();

            // Convert the result to an associative array
            $attendanceRecords = array();
            while ($row = $attendanceResult->fetch_assoc()) {
                $attendanceRecords[] = $row;
            }

            // Return the attendance records as JSON
            echo json_encode(['status' => true, 'attendance' => $attendanceRecords]);
        } else {
            // Return an error response if login fails
            echo json_encode(['status' => false, 'message' => 'Invalid credentials']);
        }
    } else {
        // Return an error response if user not found
        echo json_encode(['status' => false, 'message' => 'User not found']);
    }
}
$connection->close();
?>
