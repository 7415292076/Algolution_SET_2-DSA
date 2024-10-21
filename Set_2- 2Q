/*Given an integer array arr[] of size n, the task is to find the count inversions of the given array. Two array element arr[i] and arr[j] from an inversion if arr[i] > arr[j] and i<j.
input arr[]={7,2,6,3}
output 4
Explanation : Given arrat has 4 inversion (7,2), (7,6), (7,3), (6,3)
*/

#include<iostream>
using namespace std ;

void sumofanypair(int arr[],int target,int l,int r)
{
 int n=0,m=0;
    for(int i=0;i<4; i++)
    {
     for(int j=m; j<4; j++)
     {
     if(arr[i]>arr[j])
     {
     cout << "( "<<arr[i]<<" , " <<arr[j]<<" ) \n";
     n++;
     }
     
     }
     m++;
    }
    
    cout << "Output:- "<<n << endl;
}
int main()
{
    int ar[]= {7,2,6,3};
    int x=9;
    int left=0;
    int right =7;
    sumofanypair(ar,x,left, right);
    
}
