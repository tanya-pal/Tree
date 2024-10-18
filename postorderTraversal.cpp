#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void postorderTree(Node* root){
     
    if (root == NULL)
    return;

    postorderTree(root->left);
    postorderTree(root->right);
    cout << root->data << " ";
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    postorderTree(root);
    return 0;
}