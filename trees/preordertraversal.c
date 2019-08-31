#include <stdio.h>
#include <stdlib.h>
//https://www.hackerrank.com/challenges/tree-preorder-traversal/problem
struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

void preOrder( struct node *root) {
    //if the node is null exit out
    if (root==NULL){
        return;
    }
    //print the roots data first 
    printf("%d ", root->data);

    //print left node data second
    preOrder(root->left);
    //print the right node data lastly
    preOrder(root->right);

}