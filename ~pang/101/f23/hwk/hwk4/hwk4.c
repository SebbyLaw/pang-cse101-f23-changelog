
#include "BST.h"
#include <stdio.h>

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

int main() {
}