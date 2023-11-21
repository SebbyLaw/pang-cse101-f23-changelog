#include "BST.h"

// Function to create a new Node
Node* createNode(int value) {
}

// Function to generate BST from a sorted array
Node* sortedArrayToBST(int arr[], int start, int end) {
    if (start > end) 
        return NULL;
    int mid = (start + end)/2;
    Node *root = createNode(arr[mid]);
    root->left = sortedArrayToBST(arr, start, mid - 1);
    root->right = sortedArrayToBST(arr, mid + 1, end);
    return root;
}

// Function to insert a node in BST
Node* insertNode(Node* root, int value) {
}

// Helper function to find the inorder successor
static Node* minValueNode(Node* node) {
}

// Function to delete a node in BST
Node* deleteNode(Node* root, int value) {
}

// Function for inorder traversal of BST
void inorderTraversal(Node* root) {
}

// Function for preorder traversal of BST
void preorderTraversal(Node* root) {
}

// Function for postorder traversal of BST
void postorderTraversal(Node* root) {
}

// Function to find a node in BST
Node* findNode(Node* root, int value) {
}

// Function to free nodes in BST
void freeTree(Node** root) {
}
// Function for levelorder traversal of BST
void levelorderTraversal(Node* root){
}
