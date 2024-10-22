/*
Given an integer array, find the maximum length subarray having a given sum.(USE
HASHMAP Concept)
Input:nums[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 }target = 8
Output:{ -5, 5, 3, 5 }
Subarrays with sum 8 are { -5, 5, 3, 5 },{ 3, 5 },{ 5, 3 }
The longest subarray is { -5, 5, 3, 5 } having length 4.
*/
#include <iostream>
#include <unordered_map>

using namespace std;

int maxLenSubarray(int nums[], int n, int target) {
    unordered_map<int, int> prefixSum;
    int sum = 0, maxLen = 0, start = 0, end = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i];

        if (sum == target) {
            maxLen = i + 1;
            start = 0;
            end = i;
        }

        if (prefixSum.find(sum - target) != prefixSum.end()) {
            if (i - prefixSum[sum - target] > maxLen) {
                maxLen = i - prefixSum[sum - target];
                start = prefixSum[sum - target] + 1;
                end = i;
            }
        }

        if (prefixSum.find(sum) == prefixSum.end()) {
            prefixSum[sum] = i;
        }
    }

    cout << "Longest subarray with sum " << target << ": ";
    for (int i = start; i <= end; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return maxLen;
}

int main() {
    int nums[] = {5, 6, -5, 5, 3, 5, 3, -2, 0};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 8;

    int maxLen = maxLenSubarray(nums, n, target);
    cout << "Maximum length: " << maxLen << endl;

    return 0;
}
