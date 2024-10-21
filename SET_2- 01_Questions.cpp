/*
1)Given an integer array nums, find the
subarray with the largest sum, and return its sum.
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubArraySum(vector<int>& nums) 
{
    int maxc=0,maxg=0;                     
    for(int i=0 ; i<nums.size(); i++)
    {
        maxc= max(nums[i],maxc + nums[i]);
         cout<<maxc<<"\n";
        if(maxc>maxg)
        {
            maxg=maxc;
           // cout<<maxc<<"\n";
        }
    }
    return maxg;
}
    

int main() {
   vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
   cout << "Maximum subarray sum is " << maxSubArraySum(nums) << endl;
    return 0;
}
