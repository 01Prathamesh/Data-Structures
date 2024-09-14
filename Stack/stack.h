#ifndef STACK_H
#define STACK_H

#include <iostream>

using namespace std;

#define MAX 100

class Stack {
protected:
    static int data[MAX];
    static int top;
    static int* TOS;
public:
    static void init();
    static void push();
    static void pop();
    static void print_stack();
    static void print_top(); // Method to print the top element
};

#endif // STACK_H


/*Code while practicing*/
// // // #ifndef STACK.H
// // // #define STACK.H

// // // #include<iostream>
// // // using namespace std;
// // // #define MAX 100


// // // static int data[MAX];
// // // static int top;
// // // static int *TOS=nullptr;
// // // class Stack{
// // //     public:
// // //     int init_s();
// // //     int push();
// // //     int pop();

// // // };
// // // class Operations:Stack{
// // //     public:
// // //     int init_s(){
// // //         top=-1;
// // //         data[top];
// // //         TOS=&data[top];
// // //         cout<<"\nStack is initilized...!!!\n";
// // //     }

// // //     int push(){
// // //         int a;
// // //         cout<<"\nEnter a number you want to push...\n";
// // //         cin>>a;
// // //         top++;
// // //         data[top]=a;
// // //         TOS=&data[top];
// // //     } 
// // // };

// // // #endif


// // #ifndef STACK_H
// // #define STACK_H

// // #include <iostream>

// // using namespace std;

// // #define MAX 100

// // class Stack {
// // protected:
// //     static int data[MAX];
// //     static int top;
// //     static int* TOS;
// // public:
// //     static void init(); // Changed to static
// //     static void push(); // Changed to static
// //     static void pop();  // Changed to static
// // };

// // class Operations : public Stack { // Changed to public inheritance
// // public:
// //     static void init(); // Implemented in header for simplicity
// //     static void push(); // Implemented in header for simplicity
// //     static void pop();  // Implemented in header for simplicity
// // };

// // #endif // STACK_H

// #ifndef STACK_H
// #define STACK_H

// #include <iostream>

// using namespace std;

// #define MAX 4

// class Stack {
// protected:
//     static int data[MAX];
//     static int top;
//     static int* TOS;
// public:
//     static void init(); // Changed to static
//     static void push(); // Changed to static
//     static void pop();  // Changed to static
//     static void print_stack(); // Added declaration
// };

// #endif // STACK_H
