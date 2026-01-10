#include<iostream>
#include<vector>
using namespace std;


int binSearch(vector<int> &nums, int target, int st, int end)
{
    if (st <= end)
    {
        int mid = (st + end) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] <= target)
        {
            return binSearch(nums, target, mid + 1, end);
        }
        else
        {
            return binSearch(nums, target, st, mid - 1);
        }
    }
    return -1;
}
int search(vector<int> &nums, int target)
{
    return binSearch(nums, target, 0, nums.size() - 1);
}

int main(){
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    cout<<"The target lies in "<<search(nums, target)<<"th index.";

    return 0;
}