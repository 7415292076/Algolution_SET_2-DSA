/*
6)Given a sorted array A (sorted in ascending order), having N integers, find if there exists any
pair of elements (A[i], A[j]) such that their sum is equal to X.
a)Using Naive Approach
b)Using Two Pointer Technique
Input: A = [1, 2, 4, 5, 7, 11]
N = 6
X = 9
Expected Output: Yes
(Explanation: The pair (2, 7) sums to 9.)
*/

#include<iostream>
using namespace std ;

void sumofanypair(int arr[],int target,int n)
{
    int sum;
    for(int i=0; i<7; i++)
    {
        for(int j=i+1; j<7; j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout << "the pair (" <<arr[i]<<" , "<<arr[j]<<") sum to "<<target<< endl;
                break;
            }
            else {
                
            }
        }
    }
}
int main()
{
    int ar[]= {1,2,3,4,5,7,11};
    int x=9;
    int n=7;
    sumofanypair(ar,x,n);
}
