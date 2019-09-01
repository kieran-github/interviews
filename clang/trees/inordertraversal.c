#include <stdio.h>
#include <stdlib.h>
https://www.hackerrank.com/challenges/tree-inorder-traversal/problem
struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

void inOrder( struct node *root) {
    //if the node is null exit out
    if(root == NULL){
        return;
    }
    //first print the left node
    inOrder(root->left);
    //Print the root second
    printf("%d ", root->data);
    //print the right node lastly.
    inOrder(root->right);

}