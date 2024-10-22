/*
  3)Given an integer array nums and an integer k, return the kth largest element in the array.
Note that it is the kth largest element in the sorted order, not the kth distinct element.
Solve it without sorting.
Example:
Input: nums = [3,2,1,5,6,4], k = 2
Output: 5
*/

#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& nums, int left, int right) {
    int pivot = nums[right];
    int i = left - 1;
    for (int j = left; j < right; j++) {
        if (nums[j] > pivot) { // For kth largest, use nums[j] > pivot
            i++;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i + 1], nums[right]);
    return i + 1;
}

int findKthLargest(vector<int>& nums, int k) {
    int left = 0, right = nums.size() - 1;
    while (true) {
        int pivotIndex = partition(nums, left, right);
        if (pivotIndex == k - 1) {
            return nums[pivotIndex];
        } else if (pivotIndex < k - 1) {
            left = pivotIndex + 1;
        } else {
            right = pivotIndex - 1;
        }
    }
}

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;
    cout << "Kth largest element is: " << findKthLargest(nums, k) << endl;
    return 0;
}
