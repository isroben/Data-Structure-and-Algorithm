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

bool isSameTree(TreeNode* p, TreeNode* q) {
    if(p == NULL || q == NULL) return p==q;

    bool isLeftSame = isSameTree(p->left, q->left);
    bool isRightSame = isSameTree(p->right, q->right);

    return isLeftSame && isRightSame && p->val == q->val;
        
}


int main(){

    vector<int> p_arr = {1,2,-1,-1,3,-1,-1};
    vector<int> q_arr = {1,2,-1,-1,3,-1,-1};

    int idx1 = -1, idx2 = -1;

    TreeNode* p = buildTree(p_arr, idx1);
    TreeNode* q = buildTree(q_arr, idx2);

    cout<< isSameTree(p, q) <<endl;

    return 0;
}