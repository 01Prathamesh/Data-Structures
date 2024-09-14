#include <stdio.h>
#include <stdlib.h>
#include "SLL.h"

/* Function to Create a Node for Singly Linked List */
SNode* s_getnode(int a) {
    SNode* temp = (SNode*)malloc(sizeof(SNode));
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    temp->data = a;
    temp->link = NULL;
    return temp;
}

/* Function to Create Singly Linked List of Size 10 */
SNode* CreateSLL() {
    SNode* temp1 = s_getnode(1);
    SNode* temp2 = s_getnode(2);
    SNode* temp3 = s_getnode(3);
    SNode* temp4 = s_getnode(4);
    SNode* temp5 = s_getnode(5);
    SNode* temp6 = s_getnode(6);
    SNode* temp7 = s_getnode(7);
    SNode* temp8 = s_getnode(8);
    SNode* temp9 = s_getnode(9);
    SNode* temp10 = s_getnode(10);
    
    temp1->link = temp2;
    temp2->link = temp3;
    temp3->link = temp4;
    temp4->link = temp5;
    temp5->link = temp6;
    temp6->link = temp7;
    temp7->link = temp8;
    temp8->link = temp9;
    temp9->link = temp10;
    
    return temp1;
}

SNode* S_HP = NULL; // Header Pointer for SLL

/* Function to Print SLL */
void printSLL() {
    SNode* p = S_HP;
    printf("\nSingly Linked List is: \n");
    while (p != NULL) {
        printf("%d -> ", p->data);
        p = p->link;
    }
    printf("NULL\n");
}

/* Function to Add New Node at Beginning in Current SLL */
void AddNode_B(int a) {
    SNode* p = s_getnode(a);
    p->link = S_HP;
    S_HP = p;
    printf("\nYour New Singly Linked List is now:\n");
    printSLL();
}

/* Function to Add New Node at End in Current SLL */
void AddNode_E(int a) {
    SNode* p = s_getnode(a);
    if (S_HP == NULL) {
        S_HP = p;
    } else {
        SNode* q = S_HP;
        while (q->link != NULL) {
            q = q->link;
        }
        q->link = p;
    }
    printf("\nYour New Singly Linked List is now:\n");
    printSLL();
}

/* Function to Add New Node Inside Current SLL */
void AddNode_I(int a) {
    int b;
    SNode* p = s_getnode(a);
    SNode* q = S_HP;
    printf("\nEnter Data of the Node After Which You Want to Insert Your New Node:\n");
    scanf("%d", &b);
    while (q != NULL && q->data != b) {
        q = q->link;
    }
    if (q != NULL) {
        p->link = q->link;
        q->link = p;
    } else {
        printf("\nNode with data %d not found.\n", b);
    }
    printf("\nYour New Singly Linked List is now:\n");
    printSLL();
}

/* Main Function to Add New Node in Current SLL */
void AddNode_SLL() {
    int a, b;
    printf("\nEnter Data of Node That You Want to Insert:\n");
    scanf("%d", &a);
    printf("\nWhere You Want to Add Node?\n1) At Begin \t 2) At End \t 3) At Inside\n");
    scanf("%d", &b);
    switch (b) {
        case 1: AddNode_B(a); break;
        case 2: AddNode_E(a); break;
        case 3: AddNode_I(a); break;
        default: printf("Invalid choice.\n"); break;
    }
}

/* Function to Delete the First Node from Singly Linked List */
void DeleteFirstNode() {
    if (S_HP == NULL) {
        printf("\nYour Singly Linked List is already empty.\n");
        return;
    }
    SNode* p = S_HP;
    S_HP = p->link;
    free(p);
    printf("\nYour New Singly Linked List is now:\n");
    printSLL();
}

/* Function to Delete the Last Node from Singly Linked List */
void DeleteLastNode() {
    if (S_HP == NULL) {
        printf("\nYour Singly Linked List is already empty.\n");
        return;
    }
    SNode* p = S_HP;
    SNode* prev = NULL;
    while (p->link != NULL) {
        prev = p;
        p = p->link;
    }
    if (prev != NULL) {
        prev->link = NULL;
    } else {
        S_HP = NULL;
    }
    free(p);
    printf("\nYour New Singly Linked List is now:\n");
    printSLL();
}

/* Function to Delete a Specific Node from Singly Linked List */
void DeleteMyNode() {
    int a;
    printf("\nEnter the Data of the Node That You Want to Delete:\n");
    scanf("%d", &a);
    SNode* p = S_HP;
    SNode* prev = NULL;
    while (p != NULL && p->data != a) {
        prev = p;
        p = p->link;
    }
    if (p != NULL) {
        if (prev != NULL) {
            prev->link = p->link;
        } else {
            S_HP = p->link;
        }
        free(p);
    } else {
        printf("\nNode with data %d not found.\n", a);
    }
    printf("\nYour New Singly Linked List is now:\n");
    printSLL();
}

/* Main Function to Delete a Node from Singly Linked List */
void DeleteNode_SLL() {
    int a;
    printf("\nWhich Node Do You Want to Delete?\n1) First Node \t 2) Last Node \t 3) Specific Node\n");
    scanf("%d", &a);
    switch (a) {
        case 1: DeleteFirstNode(); break;
        case 2: DeleteLastNode(); break;
        case 3: DeleteMyNode(); break;
        default: printf("Invalid choice.\n"); break;
    }
}

/* Function to Count the Index of a Desired Node */
void count_SLL() {
    int a;
    printf("\nEnter Data of the Node of Which You Want to Count the Index:\n");
    scanf("%d", &a);
    SNode* p = S_HP;
    int count = 0;
    while (p != NULL && p->data != a) {
        count++;
        p = p->link;
    }
    if (p != NULL) {
        printf("\nThe Index of your Node is: %d\n", count + 1);
    } else {
        printf("\nNode with data %d not found.\n", a);
    }
}

/* Function to Modify Singly Linked List */
void Modify_SLL() {
    int x;
    printf("\nWhat Do You Want to Do?\n1) Add New Node \t 2) Delete Existing Node \t 3) Get the Index of the Node\n");
    scanf("%d", &x);
    switch (x) {
        case 1: AddNode_SLL(); break;
        case 2: DeleteNode_SLL(); break;
        case 3: count_SLL(); break;
        default: printf("Invalid choice.\n"); break;
    }
}
