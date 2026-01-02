#include<iostream>
#include<vector>
using namespace std;

/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/

// Brute force Approach O(n^2)
vector<int> twoSum(vector<int>& nums, int target) {
    int size = nums.size();
    for(int st=0; st<size; st++){
        for(int end=st+1; end<size; end++){
            if(nums[st]+nums[end]==target){
                return {st, end};
            }
        }

    }
    return{};
}

// Optimize Approach
vector<int> twoSum_optim(vector<int>& nums, int target) {
    int size = nums.size();

    int i = 0, j = size-1;
    vector<int> ans;

    while(i<j){
        int pairSum = nums[i] + nums[j];
        if(pairSum > target){
            j--;
        }
        else if (pairSum > target){
           i++; 
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        
    }
    return{};
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> index = twoSum(nums, target);
    for(int i=0; i<2; i++){
        cout<<index[i]<<"\t"<<endl;;
    }

    vector<int> ans = twoSum_optim(nums, target);
    for(int i=0; i<2; i++){
        cout<<ans[i]<<"\t"<<endl;;
    }

    return 0;
}