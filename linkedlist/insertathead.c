#include <stdio.h>
#include <stdlib.h>

typedef struct SinglyLinkedListNode SinglyLinkedListNode;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* head, int data) {
    //Declare reference 
    SinglyLinkedListNode *node;
    //Initialize storage for size of the node
    node = (SinglyLinkedListNode *) malloc(sizeof(struct SinglyLinkedListNode));
    //set the data 
    node->data = data;
    //make the next node of the new node the old head.
    node->next = head;

    //optionally set the current head to the new node.
    return node;
}
