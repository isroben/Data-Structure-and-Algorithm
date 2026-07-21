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

// Tree Traversal -> preorder
void traversalTree(Node* root){
    if(root == NULL){
        cout<< -1 <<" ";
        return;
    }

    cout<< root->data <<" ";
    traversalTree(root->left);
    traversalTree(root->right);
}

// InOrder Traversal
void inOrder(Node* root){
    if(root == NULL) return;

    inOrder(root->left);
    cout<< root->data <<" ";
    inOrder(root->right);
}

// PostOrder Traversal
void postOrder(Node* root){
    if(root == NULL) return;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<< " ";
}

// Level Order Traversal
void levelOrder(Node* root){
    queue<Node*> Q;

    Q.push(root);

    while(Q.size() > 0){
        Node* curr = Q.front();
        Q.pop();

        cout<< curr->data<< " ";
        if(curr->left != NULL){
            Q.push(curr->left);
        }
        if(curr->right != NULL){
            Q.push(curr->right);
        }
    }
    cout<<endl;
}

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);

    cout<<"Pre-Order: ",traversalTree(root);
    cout<<endl;

    cout<<"In-Order: ",inOrder(root);
    cout<<endl;

    cout<<"Post-Order: ", postOrder(root);
    cout<<endl;

    cout<<"Level-Order: ", levelOrder(root);

    return 0;
}