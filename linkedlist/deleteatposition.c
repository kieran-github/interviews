#include <stdio.h>
#include <stdlib.h>

typedef struct SinglyLinkedListNode SinglyLinkedListNode;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    int index = 0;
    //base cases, deleting the list (or head)
    if(position==0 || head==NULL){
        head = NULL;
        return head;
    }

    //Store a temporary reference to the head value
    SinglyLinkedListNode *head_ref = head;  
    
    //Initialize a current node to loop through the list.
    SinglyLinkedListNode *current = head;

    //declare a previous node to repoint to the position + 1 node
    SinglyLinkedListNode *prev = NULL;

    //Loop through the linked list keeping track of the previous position as well as 
    //the currentnode. It will exit when index == position
    while(index < position){
        prev = current;
        current = current->next;
        ++index;
    }

    //Repoint the node in position position-1 to position+1 effectively deleting the node 
    //in the lsit.
    prev->next = current->next;
    
    //return a reference to the head node.
    return head_ref;


}