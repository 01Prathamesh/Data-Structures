#include <stdio.h>
#include <stdlib.h>
#include "DLL.h"

/* Function to Create a Node for Doubly Linked List */
DNode* d_getnode(int a) {
    DNode* temp = (DNode*)malloc(sizeof(DNode));
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    temp->data = a;
    temp->prev = NULL;
    temp->next = NULL;
    return temp;
}

/* Function to Create Doubly Linked List of Size 10 */
DNode* CreateDLL() {
    DNode* head = d_getnode(11);
    DNode* current = head;

    for (int i = 12; i <= 20; ++i) {
        DNode* newNode = d_getnode(i);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }

    return head;
}

DNode* D_HP = NULL; // Header Pointer for DLL

/* Function to Print DLL */
void printDLL() {
    DNode* p = D_HP;
    printf("\nDoubly Linked List is:\n");
    while (p != NULL) {
        printf("%d <=> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

/* Function to Add New Node at Beginning in Current DLL */
void AddNode_B_DLL(int a) {
    DNode* p = d_getnode(a);
    if (D_HP == NULL) {
        D_HP = p;
    } else {
        p->next = D_HP;
        D_HP->prev = p;
        D_HP = p;
    }
    printf("\nYour New Doubly Linked List is now:\n");
    printDLL();
}

/* Function to Add New Node at End in Current DLL */
void AddNode_E_DLL(int a) {
    DNode* p = d_getnode(a);
    if (D_HP == NULL) {
        D_HP = p;
    } else {
        DNode* q = D_HP;
        while (q->next != NULL) {
            q = q->next;
        }
        q->next = p;
        p->prev = q;
    }
    printf("\nYour New Doubly Linked List is now:\n");
    printDLL();
}

/* Function to Add New Node Inside Current DLL */
void AddNode_I_DLL(int a) {
    int b;
    DNode* p = d_getnode(a);
    DNode* q = D_HP;
    printf("\nEnter Data of the Node After Which You Want to Insert Your New Node:\n");
    scanf("%d", &b);
    while (q != NULL && q->data != b) {
        q = q->next;
    }
    if (q != NULL) {
        p->next = q->next;
        p->prev = q;
        if (q->next != NULL) {
            q->next->prev = p;
        }
        q->next = p;
    } else {
        printf("\nNode with data %d not found.\n", b);
    }
    printf("\nYour New Doubly Linked List is now:\n");
    printDLL();
}

/* Main Function to Add New Node in Current DLL */
void AddNode_DLL() {
    int a, b;
    printf("\nEnter Data of Node That You Want to Insert:\n");
    scanf("%d", &a);
    printf("\nWhere You Want to Add Node?\n1) At Begin \t 2) At End \t 3) At Inside\n");
    scanf("%d", &b);
    switch (b) {
        case 1: AddNode_B_DLL(a); break;
        case 2: AddNode_E_DLL(a); break;
        case 3: AddNode_I_DLL(a); break;
        default: printf("Invalid choice.\n"); break;
    }
}

/* Function to Delete the First Node from Doubly Linked List */
void DeleteFirstNode_DLL() {
    if (D_HP == NULL) {
        printf("\nYour Doubly Linked List is already empty.\n");
        return;
    }
    DNode* p = D_HP;
    D_HP = p->next;
    if (D_HP != NULL) {
        D_HP->prev = NULL;
    }
    free(p);
    printf("\nYour New Doubly Linked List is now:\n");
    printDLL();
}

/* Function to Delete the Last Node from Doubly Linked List */
void DeleteLastNode_DLL() {
    if (D_HP == NULL) {
        printf("\nYour Doubly Linked List is already empty.\n");
        return;
    }
    DNode* p = D_HP;
    while (p->next != NULL) {
        p = p->next;
    }
    if (p->prev != NULL) {
        p->prev->next = NULL;
    } else {
        D_HP = NULL;
    }
    free(p);
    printf("\nYour New Doubly Linked List is now:\n");
    printDLL();
}

/* Function to Delete a Specific Node from Doubly Linked List */
void DeleteMyNode_DLL() {
    int a;
    printf("\nEnter the Data of the Node That You Want to Delete:\n");
    scanf("%d", &a);
    DNode* p = D_HP;
    while (p != NULL && p->data != a) {
        p = p->next;
    }
    if (p != NULL) {
        if (p->prev != NULL) {
            p->prev->next = p->next;
        } else {
            D_HP = p->next;
        }
        if (p->next != NULL) {
            p->next->prev = p->prev;
        }
        free(p);
    } else {
        printf("\nNode with data %d not found.\n", a);
    }
    printf("\nYour New Doubly Linked List is now:\n");
    printDLL();
}

/* Main Function to Delete a Node from Doubly Linked List */
void DeleteNode_DLL() {
    int a;
    printf("\nWhich Node Do You Want to Delete?\n1) First Node \t 2) Last Node \t 3) Specific Node\n");
    scanf("%d", &a);
    switch (a) {
        case 1: DeleteFirstNode_DLL(); break;
        case 2: DeleteLastNode_DLL(); break;
        case 3: DeleteMyNode_DLL(); break;
        default: printf("Invalid choice.\n"); break;
    }
}

/* Function to Count the Index of a Desired Node */
void count_DLL() {
    int a;
    printf("\nEnter Data of the Node of Which You Want to Count the Index:\n");
    scanf("%d", &a);
    DNode* p = D_HP;
    int count = 0;
    while (p != NULL && p->data != a) {
        count++;
        p = p->next;
    }
    if (p != NULL) {
        printf("\nThe Index of your Node is: %d\n", count + 1);
    } else {
        printf("\nNode with data %d not found.\n", a);
    }
}

/* Function to Modify Doubly Linked List */
void Modify_DLL() {
    int x;
    printf("\nWhat Do You Want to Do?\n1) Add New Node \t 2) Delete Existing Node \t 3) Get the Index of the Node\n");
    scanf("%d", &x);
    switch (x) {
        case 1: AddNode_DLL(); break;
        case 2: DeleteNode_DLL(); break;
        case 3: count_DLL(); break;
        default: printf("Invalid choice.\n"); break;
    }
}
