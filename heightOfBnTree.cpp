#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node* buildTree(vector<int> preOrder){
    idx++;

    if(preOrder[idx] == -1) return NULL;

    Node* root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder);
    root->right = buildTree(preOrder);

    return root;
}

// Height of a Tree
int height(Node* root){
    if(root == NULL) return 0;

    int leftHt = height(root->left);
    int rightHt = height(root->right);

 return max(leftHt, rightHt)+1;
}

// Nodes of a Tree
int count(Node* root){
    if(root == NULL) return 0;

    int leftCount = count(root->left);
    int rightCount = count(root->right);

    return leftCount+rightCount+1;
}

// Sum of Nodes of a Tree
int sumOfNode(Node* root){
    if(root == NULL) return 0;

    int leftSum = sumOfNode(root->left);
    int rightSum = sumOfNode(root->right);

    return leftSum+rightSum+root->data;
} 

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);

    cout<<"The max height of Tree: "<< height(root) << endl;

    cout<<"The Number of NOde of Tree: "<< count(root) << endl;

    cout<<"The sum of NOde of Tree: "<< sumOfNode(root) << endl;

    return 0;

}