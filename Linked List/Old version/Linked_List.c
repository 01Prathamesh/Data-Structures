#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"SLL.h"
#include"DLL.h"

/*Global Function Which can Modify any Linked List*/
int Modify(){
    int a;
    printf("\nDo You Want To Modify Linked List???\n 1)YES \t 2)NO \n");
    scanf("%d",&a);
    switch(a){
        case 1: {
            int a;
            printf("\nWhich Linked List You Want To Modify???\n 1)Singly Linked List \t 2)Doubly Linked List\n");
            scanf("%d",&a);
            switch(a){
                case 1:Modify_SLL(); break;
                case 2:Modify_DLL(); break;
                default: break;
            }
        };break;
        case 2: return 0; break;
        default: break;
    }
    return 0;
}


int main(){

    S_HP=CreateSLL();
    D_HP=CreateDLL();
    printSLL();
    printf("\n");
    printDLL();
    printf("\n");
    Modify();
    printf("\n*****************************************************************\n");
    printSLL();
    printDLL();
    printf("\n*****************************************************************\n");
    printf("\n\nEnter For Happy Ending\n");
    getch();
    return 0;
}
