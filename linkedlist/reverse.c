#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct SinglyLinkedListNode SinglyLinkedListNode;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};

void reversePrint( SinglyLinkedListNode* head) {
    //The list is null return - base case
    if (head == NULL){
        return;
    }

    //Keep track of the previous node. I.e. the current after current->next is called
    SinglyLinkedListNode *prev = NULL;

    //The current node on the first iteration will be the head. Example 5->2->1->NULL 5        will be th head.
    SinglyLinkedListNode *current = head;
    //This will keep track of the next node.
    SinglyLinkedListNode *next = NULL;
    //Create a reference to the new head
    SinglyLinkedListNode *head_ref = NULL;

    while (current!=NULL){
   }
    //reset the head of the list
          //Store the next node in the list
        next = current->next;

        //Reverse the pointer so that it will be pointing to the previous (or the last              current). On the first iteration, the head will also point to null because previous reference is NULL initially
        current->next = prev;
        //Change the previous reference to the current node to set up for next reverse. 
        prev = current;

        //advance forward one node.
        current = next;

   head_ref = prev;
}
