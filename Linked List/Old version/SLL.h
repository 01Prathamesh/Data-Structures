#include<stdio.h>
#include<stdlib.h>

/*Singly Linked List Data Structure of a Node Define*/
typedef struct Snode{
    int data;
    struct Snode *link;
} SNode;

/*Function for Creating a Node of Singly Linked List*/
SNode* s_getnode(int a){
    SNode* temp;
    temp = (SNode*)malloc(sizeof(SNode));
    temp->data=a;
    temp->link=NULL;
    return temp;
}

/*Function for Creating Singly Linked List of size 10*/
SNode* CreateSLL(){
    SNode* temp1=s_getnode(1);
    SNode* temp2=s_getnode(2);
    SNode* temp3=s_getnode(3);
    SNode* temp4=s_getnode(4);
    SNode* temp5=s_getnode(5);
    SNode* temp6=s_getnode(6);
    SNode* temp7=s_getnode(7);
    SNode* temp8=s_getnode(8);
    SNode* temp9=s_getnode(9);
    SNode* temp10=s_getnode(10);
    
    temp1->link =temp2;
    temp2->link =temp3;
    temp3->link =temp4;
    temp4->link =temp5;
    temp5->link =temp6;
    temp6->link =temp7;
    temp7->link =temp8;
    temp8->link =temp9;
    temp9->link =temp10;
    
    return temp1;

}

SNode* S_HP; //It is a Header Pointer of SLL which will store address of first element of SLL.

/*Function To Print SLL */
int printSLL(){
    SNode*p= S_HP;
    printf("\nSingly Linked List is: \n");
    while(p->link!=NULL){
        printf("%d -> ",p->data);
        p=p->link;
    }
    printf("%d",p->data);
    printf("\n");
    return 0;
}

/*Function To Add New Node at Beginning in Current SLL*/
int AddNode_B(int a){
    SNode*p= s_getnode(a);
    p->link=S_HP;
    S_HP=p;
    printf("\n Your New Singly Linked List is now : \n");
    printSLL();
    return 0;
}

/*Function To Add New Node at End in Current SLL*/
int AddNode_E(int a){
    SNode*p=s_getnode(a);
    SNode*q=S_HP;
    if(S_HP==NULL){ 
        S_HP=p;
        printf("\n Your New Singly Linked List is now : \n");
        printSLL();
        return 0;
    }
    while(q->link!=NULL){
        q=q->link;
    }
    q->link=p;
    printf("\n Your New Singly Linked List is now : \n");
    printSLL();
    return 0;
}

/*Function To Add New Node at Inside in Current SLL*/
int AddNode_I(int a){
    int b;
    SNode*p=s_getnode(a);
    SNode*q=S_HP;
    printf("\nEnter Data of that Node After which you want to insert your New Node\n");
    scanf("%d",&b);
    if(q->link==NULL){
        S_HP=p;
        printf("\n Your New Singly Linked List is now : \n");
        printSLL();
        return 0;
    }
    while(q->data!=b && q->link!=NULL){
        q=q->link;
    }
    if(q->data==b){
        p->link=q->link;
        q->link=p;
    }
    else{
        printf("\nYou Stated Data is NOT FOUND in SLL\n");
        return 0;
    }
    printf("\n Your New Singly Linked List is now : \n");
    printSLL();
    return 0;
}

/*Main Function To Add New Node in Current SLL*/
int AddNode_SLL(){
    int a,b;
    printf("\n Enter Data Of Node That You Want To Insert \n ");
    scanf("%d",&a);
    printf("\n Where You Want To Add Node??? \n 1)At Begin \t 2)At End \t 3)At Inside \n");
    scanf("%d",&b);
    switch(b){
        case 1:AddNode_B(a);break;
        case 2:AddNode_E(a);break;
        case 3: AddNode_I(a);break;
        default: break;
    }
}

/*Function To Delete a First Node From Singly Linked List*/
int DeleteFirstNode(){
    SNode*p=S_HP;
    if(S_HP==NULL){
        printf("\nYour Linked List is already empty\n");
        return 0;
    }
    S_HP=p->link;
    free(p);
    printf("\n Your New Singly Linked List is now : \n");
    printSLL();
    return 0;
}

/*Function To Delete a Last Node From Singly Linked List*/
int DeleteLastNode(){
    SNode*p=S_HP;
    SNode*r=NULL;
    if(S_HP==NULL){
        printf("\nYour Linked List is already empty\n");
        return 0;
    }
    while(p->link!=NULL){
        r=p;
        p=p->link;
    }
    r->link=NULL;
    free(p);
    printf("\n Your New Singly Linked List is now : \n");
    printSLL();
    return 0;
}

/*Function To Delete a Node which user want to Delete From Singly Linked List*/
int DeleteMyNode(){
    int a;
    printf("\nEnter The Data of the Node That You Want To Delete\n");
    scanf("%d",&a);
    SNode*p=S_HP;
    SNode*r=NULL;
    while(p->data!=a && p->link!=NULL){
        r=p;
        p=p->link;
    }
    if(p->data==a){
        r->link=p->link;
        free(p);
    }
    else {
        printf("\nNode That You Want To Delete Is NOT in the Given Linked List\n");
        return 0;
    }
    printf("\n Your New Singly Linked List is now : \n");
    printSLL();
    return 0;
}

/*Main Function To Delete a Node From Singly Linked List*/
int DeleteNode_SLL(){
    int a;
    printf("\nWhich Node You Want To Delete\n 1)First Node \t 2)Last Node \t 3)My Node \n");
    scanf("%d",&a);
    switch(a){
        case 1:DeleteFirstNode(); break;
        case 2:DeleteLastNode(); break;
        case 3:DeleteMyNode(); break;
        default: break;
    }
    return 0;
}


/*Function to count the Index of your desire Node*/
int count_SLL(){
    int a;
    printf("\nEnter Data of the node of which you want to count the index.\n");
    scanf("%d",&a);
    SNode*p=S_HP;
    int count=0;
    while(p->data!=a){
        count++;
        p=p->link;
    }
    count+=1;
    printf("\nThe Index of your Node is: %d\n",count);
}


/*Function to ask user :- Want to modify data???*/
int Modify_SLL(){
   
    int x;
    printf("\nWhat You Want To Do???\n 1)Add New Node \t 2)Delete Existing Node \t 3)Get the Index of the Node\n");
    scanf("%d",&x);
    switch(x){
        case 1:AddNode_SLL(); break;
        case 2:DeleteNode_SLL(); break;
        case 3: count_SLL(); break;
        default: break;
    }    
    return 0;
}
