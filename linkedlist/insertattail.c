#include <stdio.h>
#include <stdlib.h>

typedef struct SinglyLinkedListNode SinglyLinkedListNode;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    //There is no head, the current head will be a new node.
    if(head==NULL){
        head = (SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
        head->data = data;
        return head;
    }
    //set the current pointer to the head
    SinglyLinkedListNode *current = head;
    //traverse until we reach the tail node.
    while(current->next!=NULL){
        current = current->next;
    }

    //Create the new node to be inserted onto the tail
    SinglyLinkedListNode *newnode = (SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
    //set the payload associated with the newnode
    newnode->data = data;
    //since it is the tail, it will be pointing to null.
    newnode->next = NULL;
    //Point the PREVIOUS tail to the new TAIL or new node.
    current->next = newnode;
    return head;
}
