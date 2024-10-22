/*
           Using Sliding Window Technique
Given an array of integers of size ‘n’, Our aim is to calculate the maximum sum of ‘k’
consecutive elements in the array(Using Sliding Window Technique)
Input : arr[] = {100, 200, 300, 400}, k = 2
Output : 700
Input : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}, k = 4
Output : 39
We get maximum sum by adding subarray {4, 2, 10, 23} of size 4.
Input : arr[] = {2, 3}, k = 3
Output : Invalid
There is no subarray of size 3 as size of whole array is 2.
*/

#include <iostream>
using namespace std;

int maxSumKConsecutive(int arr[], int n, int k) {
    if (n < k) {
        cout << "Invalid";
        return -1;
    }

    int maxSum = 0;
    int windowSum = 0;

    // Calculate sum of first window
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    maxSum = windowSum;

    // Slide the window
    for (int i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i];
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    int arr1[] = {100, 200, 300, 400};
    int k1 = 2;
    cout << "Maximum sum of " << k1 << " consecutive elements is: " << maxSumKConsecutive(arr1, sizeof(arr1) / sizeof(arr1[0]), k1) << endl;

    int arr2[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k2 = 4;
    cout << "Maximum sum of " << k2 << " consecutive elements is: " << maxSumKConsecutive(arr2, sizeof(arr2) / sizeof(arr2[0]), k2) << endl;

    int arr3[] = {2, 3};
    int k3 = 3;
    cout << "Maximum sum of " << k3 << " consecutive elements is: ";
    maxSumKConsecutive(arr3, sizeof(arr3) / sizeof(arr3[0]), k3);

    return 0;
}
