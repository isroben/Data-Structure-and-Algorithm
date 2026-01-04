#include<iostream>
using namespace std;

/* Majority elements*/
int majorityElements(int nums[7]){  // Brute force method O(n^2)

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



int main(){
    int nums[7] = {2, 2, 1, 1, 1, 2, 2};

    int ans = majorityElements(nums);
    cout<<ans;

    return 0;
}
