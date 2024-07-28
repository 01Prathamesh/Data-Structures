#include<Stdio.h>
#include<stdlib.h>

/*Doubly Linked List Data Structure od Node Define */
typedef struct Dnode{
    int data;
    struct Dnode * prev;
    struct Dnode * next;
}DNode;

/*Function For Doubly Linked List*/
DNode * d_getnode(int a){
    DNode*temp;
    temp = (DNode*)malloc(sizeof(DNode));
    temp->data=a;
    temp->prev=NULL;
    temp->next=NULL;
    return temp;
}

/*Function To Creat Doubly Linked List of Size 10*/
DNode* CreateDLL(){
    DNode*temp1=d_getnode(11);
    DNode*temp2=d_getnode(12);
    DNode*temp3=d_getnode(13);
    DNode*temp4=d_getnode(14);
    DNode*temp5=d_getnode(15);
    DNode*temp6=d_getnode(16);
    DNode*temp7=d_getnode(17);
    DNode*temp8=d_getnode(18);
    DNode*temp9=d_getnode(19);
    DNode*temp10=d_getnode(20);

    temp1->next=temp2;
    temp2->prev=temp1;
    temp2->next=temp3;
    temp3->prev=temp2;
    temp3->next=temp4;
    temp4->prev=temp3;
    temp4->next=temp5;
    temp5->prev=temp4;
    temp5->next=temp6;
    temp6->prev=temp5;
    temp6->next=temp7;
    temp7->prev=temp6;
    temp7->next=temp8;
    temp8->prev=temp7;
    temp8->next=temp9;
    temp9->prev=temp8;
    temp9->next=temp10;
    temp10->prev=temp9;

    return temp1;
}

DNode* D_HP; //It is a Header Pointer of SLL which will store address of first element of DLL.

/*Function To Print DLL */
int printDLL(){
    DNode*p= D_HP;
    printf("\n Doubly Linked List is: \n");
    while(p->next!=NULL){
        printf("%d <=> ",p->data);
        p=p->next;
    }
    printf("%d",p->data);
    printf("\n");
    return 0;
}

/*Function To Add New Node at Beginning in Current DLL*/
int AddNode_B_DLL(int a){
    DNode*p= d_getnode(a);
    if(D_HP->next==NULL){
        D_HP=p;
    }
    else{
        p->next=D_HP;
        D_HP->next->prev=p;
        D_HP=p;
    }
    printf("\n Your New Doubly Linked List is now : \n");
    printDLL();
    return 0;
}

/*Function To Add New Node at End in Current DLL*/
int AddNode_E_DLL(int a){
    DNode*p=d_getnode(a);
    DNode*q=D_HP;
    if(D_HP==NULL){ 
        D_HP=p;
    }
    else{
        while(q->next!=NULL){
            q=q->next;
        }
        q->next=p;
        p->prev=q;
    }
    printf("\n Your New Doubly Linked List is now : \n");
    printDLL();
    return 0;
}

/*Function To Add New Node at Inside in Current DLL*/
int AddNode_I_DLL(int a){
    int b;
    DNode*p=d_getnode(a);
    DNode*q=D_HP;
    printf("\nEnter Data of that Node After which you want to insert your New Node\n");
    scanf("%d",&b);
    if(q->next==NULL){
        D_HP=p;
        printf("\n Your New Doubly Linked List is now : \n");
        printDLL();
        return 0;
    }
    while(q->data!=b && q->next!=NULL){
        q=q->next;
    }
    if(q->data==b){
        p->next=q->next;
        p->prev=q;
        q->next->prev=p;
        q->next=p;
    }
    else{
        printf("\nYou Stated Data is NOT FOUND in DLL\n");
        return 0;
    }
    printf("\n Your New Doubly Linked List is now : \n");
    printDLL();
    return 0;
}


/*Main Function To Add New Node in Current DLL*/
int AddNode_DLL(){
    int a,b;
    printf("\n Enter Data Of Node That You Want To Insert \n ");
    scanf("%d",&a);
    printf("\n Where You Want To Add Node??? \n 1)At Begin \t 2)At End \t 3)At Inside \n");
    scanf("%d",&b);
    switch(b){
        case 1:AddNode_B_DLL(a);break;
        case 2:AddNode_E_DLL(a);break;
        case 3: AddNode_I_DLL(a);break;
        default: break;
    }
    return 0;
}

/*Function To Delete a First Node From Singly Linked List*/
int DeleteFirstNode_DLL(){
    DNode*p=D_HP;
    if(D_HP==NULL){
        printf("\nYour Linked List is already empty\n");
        return 0;
    }
    D_HP=p->next;
    p->next->prev=NULL;
    free(p);
    printf("\n Your New Doubly Linked List is now : \n");
    printDLL();
    return 0;
}

/*Function To Delete a Last Node From Singly Linked List*/
int DeleteLastNode_DLL(){
    DNode*p=D_HP;
    if(D_HP==NULL){
        printf("\nYour Linked List is already empty\n");
        return 0;
    }
    while(p->next!=NULL){
        p=p->next;
    }
    p->prev->next=NULL;
    free(p);
    printf("\n Your New Doubly Linked List is now : \n");
    printDLL();
    return 0;
}

/*Function To Delete a Node which user want to Delete From Singly Linked List*/
int DeleteMyNode_DLL(){
    int a;
    printf("\nEnter The Data of the Node That You Want To Delete\n");
    scanf("%d",&a);
    DNode*p=D_HP;
    while(p->data!=a && p->next!=NULL){
        p=p->next;
    }
    if(p->data==a){
        p->prev->next=p->next;
        p->next->prev=p->prev;
        free(p);
    }
    else {
        printf("\nNode That You Want To Delete Is NOT in the Given Linked List\n");
        return 0;
    }
    printf("\n Your New Doubly Linked List is now : \n");
    printDLL();
    return 0;
}

/*Main Function To Delete a Node From Singly Linked List*/
int DeleteNode_DLL(){
    int a;
    printf("\nWhich Node You Want To Delete\n 1)First Node \t 2)Last Node \t 3)My Node \n");
    scanf("%d",&a);
    switch(a){
        case 1:DeleteFirstNode_DLL(); break;
        case 2:DeleteLastNode_DLL(); break;
        case 3:DeleteMyNode_DLL(); break;
        default: break;
    }
    return 0;
}

/*Function to count the Index of your desire Node*/
int count_DLL(){
    int a;
    printf("\nEnter Data of the node of which you want to count the index.\n");
    scanf("%d",&a);
    DNode*p=D_HP;
    int count=0;
    while(p->data!=a){
        count++;
        p=p->next;
    }
    count+=1;
    printf("\nThe Index of your Node is: %d\n",count);
}


/*Function to ask user :- Want to modify data???*/
int Modify_DLL(){
    
    int x;
    printf("\nWhat You Want To Do???\n 1)Add New Node \t 2)Delete Existing Nod \t 3)Get the Index of the Node\n");
    scanf("%d",&x);
    switch(x){
        case 1:AddNode_DLL(); break;
        case 2:DeleteNode_DLL(); break;
        case 3:count_DLL();break;
        default: break;
    }
    return 0;
}