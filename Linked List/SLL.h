#ifndef SLL_H
#define SLL_H

/* Singly Linked List Node Structure */
typedef struct Snode {
    int data;
    struct Snode *link;
} SNode;

/* Global Header Pointer for Singly Linked List */
extern SNode* S_HP;

/* Function Declarations for Singly Linked List */

/* Function to Create a Singly Linked List */
SNode* CreateSLL();

/* Function to Print the Singly Linked List */
void printSLL(); // Updated return type to void

/* Function to Add a Node to the Singly Linked List */
void AddNode_SLL(); // Updated return type to void

/* Function to Delete a Node from the Singly Linked List */
void DeleteNode_SLL(); // Updated return type to void

/* Function to Count the Index of a Node in the Singly Linked List */
void count_SLL(); // Updated return type to void

/* Function to Modify the Singly Linked List */
void Modify_SLL(); // Updated return type to void

#endif // SLL_H
