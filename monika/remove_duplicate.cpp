#include<iostream>
#include<vector>
#include<bits\stdc++.h>
using namespace std;
    int removeDuplicates(vector<int>& nums) {
        
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        return nums.size();
    }
 int main ()
 {
    vector<int>nums={1,4,5,6,6,7};
    removeDuplicates(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
 }