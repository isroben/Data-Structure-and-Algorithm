#include<iostream>
#include<vector>
using namespace std;

/* Majority elements*/
int majorityElements_bf(int nums[7]){  // Brute force method O(n^2)

    for(int i=0; i<7; i++){
        int freq = 0;
        for(int j=0; j<7; j++){
            if(nums[i] == nums[j]){
                freq++;
            }
        }
        cout<<freq<<endl;
        if(freq>(7/2)){
            return nums[i];
        }
    }
}

int majorityElements_Optim(vector<int>& nums){
    int n = nums.size();

    // sort
    // sort(nums.begin(), nums.end());

    // freq count
    int freq = 1, ans = nums[0];
    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = nums[1];
        }
        if(freq>n/2){
            return ans;
        }
    }
    return ans;
}

int majorityElements_MooreAlgo(int nums[7]){
    int freq = 0, ans = 0;

    for(int i=0; i<7; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}



int main(){
    int nums[7] = {2, 2, 1, 1, 1, 2, 2};

    // int ans = majorityElements_bf(nums);
    // cout<<ans;

    cout<<majorityElements_MooreAlgo(nums);

    return 0;
}
