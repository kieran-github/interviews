#include <stdio.h>
#include <stdlib.h>

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};


int getHeight(struct node* root) {
    if(root == NULL){
        return -1;
    }
    int maxOfRight = getHeight(root->right) + 1;
    int maxOfLeft = getHeight(root->left) + 1;
    
    return MAX(maxOfLeft, maxOfRight); 
    
}

