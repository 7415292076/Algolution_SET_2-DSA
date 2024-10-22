/*
  5)Given an array arr[] of size n, return an equilibrium index (if any) or -1 if no equilibrium index
exists. The equilibrium index of an array is an index such that the sum of elements at lower
indexes equals the sum of elements at higher indexes.
Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists.
Examples:
Input: arr[] = {-7, 1, 5, 2, -4, 3, 0}
Output: 4
Explanation: In 1-based indexing, 4 is an equilibrium index, because:
arr[1] + arr[2] + arr[3] = arr[5] + arr[6] + arr[7]
Input: arr[] = {1, 2, 3}
Output: -1
Explanation: There is no equilibrium index in the array.
Input:arr = {1, 3, 5, 2, 2}
Expected Output:2
Explanation: At index 2, the sum of elements on the left (1 + 3 = 4) is equal to the sum of
elements on the right (2 + 2 = 4).
*/
 
 
#include <iostream>
using namespace std;

int equilibrium(int arr[], int n) {
    if (n == 1) {
        return 1; // Single element is always an equilibrium index
    }

    for (int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;

        // Calculate left sum
        for (int j = 0; j < i; j++) {
            leftSum += arr[j];
        }

        // Calculate right sum
        for (int j = i + 1; j < n; j++) {
            rightSum += arr[j];
        }

        // Check if left sum equals right sum
        if (leftSum == rightSum) {
            return i + 1; // 1-based indexing
        }
    }

    return -1; // No equilibrium index found
}

int main() {
    int arr1[] = {-7, 1, 5, 2, -4, 3, 0};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Equilibrium index: " << equilibrium(arr1, n1) << endl;

    int arr2[] = {1, 2, 3};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Equilibrium index: " << equilibrium(arr2, n2) << endl;

    int arr3[] = {1, 3, 5, 2, 2};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Equilibrium index: " << equilibrium(arr3, n3) << endl;

    return 0;
}
