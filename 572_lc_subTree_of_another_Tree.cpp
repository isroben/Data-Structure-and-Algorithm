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

bool isIdentical(TreeNode *p, TreeNode *q)
{
    if (p == NULL || q == NULL)
        return p == q;

    bool isLeftSame = isIdentical(p->left, q->left);
    bool isRightSame = isIdentical(p->right, q->right);

    return isLeftSame && isRightSame && p->val == q->val;
}

bool isSubtree(TreeNode *root, TreeNode *subRoot)
{
    if (root == NULL || subRoot == NULL)
        return root == subRoot;

    if (root->val == subRoot->val && isIdentical(root, subRoot))
    {
        return true;
    }
    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}

int main(){
    vector<int> p_arr = {3,4,1,-1,-1,2,0,-1,5,-1,-1};
    vector<int> q_arr = {4,-1,-1,2,-1,-1};

    int idx1 = -1, idx2 = -1;

    TreeNode* p = buildTree(p_arr, idx1);
    TreeNode* q = buildTree(q_arr, idx2);

    cout<< isSubtree(p, q) <<endl;


    return 0;
}