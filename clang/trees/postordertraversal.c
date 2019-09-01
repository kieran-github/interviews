#include <stdio.h>
#include <stdlib.h>
// https://www.hackerrank.com/challenges/tree-postorder-traversal/problem

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};
void postOrder( struct node *root) {
    //Base case: if the node is null, break out.
    if(root==NULL){
        return;
    }

    //check left leaf first, if it contains any value.
    postOrder(root->left);
    //check right left after.
    postOrder(root->right);
    //print out the data of the node seperated by space..
    printf("%d ", root->data);
}