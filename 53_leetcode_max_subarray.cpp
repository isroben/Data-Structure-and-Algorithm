#include<iostream>
#include<vector>

using namespace std;

/* Given an integer array nums, find the subarray with the largest sum, and return its sum */
int maxSubArray(vector<int> &nums){ // O(n)
    int currSum = 0, maxSum = INT32_MIN;
    
    for (int val: nums){
        currSum += val;
        maxSum = max(currSum, maxSum);

        if(currSum < 0){
            currSum = 0;
        }
    }

    return maxSum;
}


int main(){
    vector<int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout<< maxSubArray(vec);

    return 0;
}
