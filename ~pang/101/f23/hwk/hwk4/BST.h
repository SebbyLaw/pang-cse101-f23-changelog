/**
 * @file BST.h
 * Header file containing the structure of the Binary Search Tree and 
 * the prototypes of the functions to be implemented.
 */

#include <stdio.h>
#include <stdlib.h>

// Structure representing a node in the binary search tree
typedef struct Node {
    int value;
    struct Node *left;
    struct Node *right;
} Node;

// Function prototypes for the BST
Node* createNode(int value);
Node* sortedArrayToBST(int arr[], int start, int end);
Node* insertNode(Node* root, int value);
Node* deleteNode(Node* root, int value);
void inorderTraversal(Node* root);
void preorderTraversal(Node* root);
void postorderTraversal(Node* root);
Node* findNode(Node* root, int value);
void freeTree(Node* root);

// Bonus Points
void levelorderTraversal(Node* root);