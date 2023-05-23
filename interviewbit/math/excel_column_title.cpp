string Solution::convertToTitle(int A) {
   string result = "";
    while (A > 0) {
        int rem = A % 26;
        if (rem == 0) {
            rem = 26;
            A--;
        }
        result = char('A' + rem - 1) + result;
        A /= 26;
    }
    return result;
}
