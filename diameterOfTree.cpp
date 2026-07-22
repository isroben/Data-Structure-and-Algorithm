#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val = val;
        left = right = NULL;
    }
};

TreeNode* buildTree(vector<int>& order, int& idx){
    idx++;

    if(idx >= (int)order.size() || order[idx] == -1) return NULL;

    TreeNode* root = new TreeNode(order[idx]);
    root->left = buildTree(order, idx);
    root->right = buildTree(order, idx);

    return root;
}

int ans = 0;
int height(TreeNode* root){
    if(root == NULL) return 0;

    int leftHt = height(root->left);
    int rightHt = height(root->right);

    ans  = max(leftHt+rightHt, ans);

    return max(leftHt, rightHt)+1;
}

// int diameter(TreeNode* root){
//     if(root == NULL) return 0;

//     int leftDim = diameter(root->left);
//     int rightDim = diameter(root->right);
//     int currDim = height(root->left) + height(root->right);

//     return max(currDim, max(leftDim, rightDim));
// }

int main(){
    vector<int> p_arr = {3,4,1,-1,-1,2,0,-1,5,-1,-1};
    vector<int> q_arr = {4,-1,-1,2,-1,-1};

    int idx1 = -1, idx2 = -1;

    TreeNode* p = buildTree(p_arr, idx1);

    height(p);

    cout<<ans<<endl;

    return 0;

}