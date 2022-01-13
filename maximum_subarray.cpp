// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
// A subarray is a contiguous part of an array.

// Example 1:
// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.

// Example 2:
// Input: nums = [1]
// Output: 1
#include<iostream>
#include<vector>
using namespace std;
int maxSubArray(vector<int>& nums) 
{int Msum=nums.at(0);
int sum=0;
    for(int i=1;i<=nums.size();i++)
        for(int k=0;k<=nums.size()-i;k++)
        {
            sum=0;
            for(int j=k+0;j<k+i;j++)
                sum+=nums.at(j);
            if(sum>Msum)
                Msum=sum;
        }
        return Msum;
}
int main(){
    
    vector<int> l;
    l.push_back(2);
    l.push_back(3);
    l.push_back(-1);
    l.push_back(2);
    l.push_back(2);

    cout<<"\n"<<maxSubArray(l);

}