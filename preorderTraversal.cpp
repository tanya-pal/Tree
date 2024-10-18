#include <iostream>

using namespace std;

struct Node {
    int data;ṇ
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

//function to perform preorder traversal 
void preorderTree(Node* root){

    if(root == NULL)
    return;

    cout << root->data << " ";
    preorderTree(root->left);
    preorderTree(root->right);
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right= new Node(5);
    preorderTree(root);
    return 0;
}