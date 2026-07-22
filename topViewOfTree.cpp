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

static int idx = -1;
TreeNode* buildTree(vector<int> preOrder){
    idx++;

    if(preOrder[idx] == -1) return NULL;

    TreeNode* root = new TreeNode(preOrder[idx]);
    root->left = buildTree(preOrder);
    root->right = buildTree(preOrder);

    return root;
}

void topView(TreeNode* root){
    queue<pair<TreeNode*, int>> q;
    map<int, int> m;
    q.push({root, 0});

    while(q.size() > 0){
        TreeNode* curr = q.front().first;
        int currHD = q.front().second;
        q.pop();

        if(m.find(currHD) == m.end()){
            m[currHD] = curr->val;
        }

        if(curr->left != NULL){
            q.push({curr->left, currHD-1});
        }
        if(curr->right != NULL){
            q.push({curr->right, currHD+1});
        }
    }

    for(auto it: m){
        cout<< it.second << " ";
    }
    cout<<endl;
}

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    TreeNode* root = buildTree(preorder);

    topView(root);

    return 0;
}