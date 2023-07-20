#include <iostream>
#include <vector>

int searchInRotatedArray(const std::vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        // If left half is sorted
        if (nums[low] <= nums[mid]) {
            if (target >= nums[low] && target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else { // Right half is sorted
            if (target > nums[mid] && target <= nums[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }

    return -1; // Target not found
}

int main() {
    std::vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 6;
    int result = searchInRotatedArray(arr, target);

    if (result != -1) {
        std::cout << "Target found at index: " << result << std::endl;
    } else {
        std::cout << "Target not found in the array." << std::endl;
    }

    return 0;
}
