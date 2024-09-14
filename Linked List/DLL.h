#ifndef DLL_H
#define DLL_H

/* Doubly Linked List Node Structure */
typedef struct Dnode {
    int data;
    struct Dnode *prev;
    struct Dnode *next;
} DNode;

/* Global Header Pointer for Doubly Linked List */
extern DNode* D_HP;

/* Function Declarations for Doubly Linked List */

/* Function to Create a Doubly Linked List */
DNode* CreateDLL();

/* Function to Print the Doubly Linked List */
void printDLL(); // Updated return type to void

/* Function to Add a Node to the Doubly Linked List */
void AddNode_DLL(); // Updated return type to void

/* Function to Delete a Node from the Doubly Linked List */
void DeleteNode_DLL(); // Updated return type to void

/* Function to Count the Index of a Node in the Doubly Linked List */
void count_DLL(); // Updated return type to void

/* Function to Modify the Doubly Linked List */
void Modify_DLL(); // Updated return type to void

#endif // DLL_H
