#include <stdio.h>
#include"SLL.c"
#include"DLL.c"
#include "SLL.h"
#include "DLL.h"

int main() {
    int choice;

    // Initialize the linked lists
    S_HP = CreateSLL();
    D_HP = CreateDLL();

    while (1) {
        printf("\nMenu:\n");
        printf("1. Singly Linked List Operations\n");
        printf("2. Doubly Linked List Operations\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Singly Linked List Operations
                printf("\nSingly Linked List Menu:\n");
                printf("1. Add Node\n");
                printf("2. Delete Node\n");
                printf("3. Count Index\n");
                printf("4. Print List\n");
                printf("5. Back to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1: AddNode_SLL(); break;
                    case 2: DeleteNode_SLL(); break;
                    case 3: count_SLL(); break;
                    case 4: printSLL(); break;
                    case 5: break;
                    default: printf("Invalid choice.\n"); break;
                }
                break;

            case 2:
                // Doubly Linked List Operations
                printf("\nDoubly Linked List Menu:\n");
                printf("1. Add Node\n");
                printf("2. Delete Node\n");
                printf("3. Count Index\n");
                printf("4. Print List\n");
                printf("5. Back to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1: AddNode_DLL(); break;
                    case 2: DeleteNode_DLL(); break;
                    case 3: count_DLL(); break;
                    case 4: printDLL(); break;
                    case 5: break;
                    default: printf("Invalid choice.\n"); break;
                }
                break;

            case 3:
                // Exit the program
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
