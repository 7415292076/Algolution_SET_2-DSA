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

void sumofanypair(int arr[],int target,int l,int r)
{
    
    while (l<r)
    {
      if(arr[l]+arr[r] == target)
      {
      cout << "the pair (" <<arr[l]<<" , "<<arr[r]<<") sum to "<<target<< endl;
      break;
      }
      else if(arr[l]+arr[r]<target) 
      {
       l++;
      } 
      else
      {
      r--;
      }        
    }
    
}
int main()
{
    int ar[]= {1,2,3,4,5,7,11};
    int x=9;
    int left=0;
    int right =7;
    sumofanypair(ar,x,left, right);
}
