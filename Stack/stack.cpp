#include "stack.h"

// Define static members
int Stack::data[MAX] = {0};
int Stack::top = -1;
int* Stack::TOS = nullptr;

void Stack::init() {
    top = -1;
    TOS = &data[top];
    cout << "\nStack is initialized...!!!\n";
}

void Stack::push() {
    if (top >= MAX - 1) {
        cout << "Stack Overflow!\n";
        return;
    }
    int a;
    cout << "\nEnter a number you want to push...\n";
    cin >> a;
    top++;
    data[top] = a;
    TOS = &data[top];
}

void Stack::pop() {
    if (top < 0) {
        cout << "Stack Underflow!\n";
        return;
    }
    cout << "Popped element: " << data[top] << endl;
    top--;
    TOS = (top >= 0) ? &data[top] : nullptr;
}

void Stack::print_stack() {
    if (top < 0) {
        cout << "Stack is empty.\n";
        return;
    }
    cout << "Stack contents:\n";
    for (int i = 0; i <= top; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;
}

void Stack::print_top() {
    if (top < 0) {
        cout << "Stack is empty. No top element.\n";
    } else {
        cout << "The TOP of the STACK is: " << data[top] << endl;
    }
}


/*Code while practicing*/
// // #include "stack.h"

// // // Define static members
// // int Stack::data[MAX] = {0};
// // int Stack::top = -1;
// // int* Stack::TOS = nullptr;

// // void Stack::init() {
// //     top = -1;
// //     TOS = &data[top];
// //     cout << "\nStack is initialized...!!!\n";
// // }

// // void Stack::push() {
// //     if (top >= MAX - 1) {
// //         cout << "Stack Overflow!\n";
// //         return;
// //     }
// //     int a;
// //     cout << "\nEnter a number you want to push...\n";
// //     cin >> a;
// //     top++;
// //     data[top] = a;
// //     TOS = &data[top];
// // }

// // void Stack::pop() {
// //     if (top < 0) {
// //         cout << "Stack Underflow!\n";
// //         return;
// //     }
// //     cout << "Popped element: " << data[top] << endl;
// //     top--;
// //     TOS = (top >= 0) ? &data[top] : nullptr;
// // }


// #include "stack.h"

// // Define static members
// int Stack::data[MAX] = {0};
// int Stack::top = -1;
// int* Stack::TOS = nullptr;

// void Stack::init() {
//     top = -1;
//     TOS = &data[top];
//     cout << "\nStack is initialized...!!!\n";
// }

// void Stack::push() {
//     if (top >= MAX - 1) {
//         cout << "Stack Overflow!\n";
//         return;
//     }
//     int a;
//     cout << "\nEnter a number you want to push...\n";
//     cin >> a;
//     top++;
//     data[top] = a;
//     TOS = &data[top];
// }

// void Stack::pop() {
//     if (top < 0) {
//         cout << "Stack Underflow!\n";
//         return;
//     }
//     cout << "Popped element: " << data[top] << endl;
//     top--;
//     TOS = (top >= 0) ? &data[top] : nullptr;
// }

// void Stack::print_stack() {
//     if (top < 0) {
//         cout << "Stack is empty.\n";
//         return;
//     }
//     cout << "Stack contents:\n";
//     for (int i = 0; i <= top; ++i) {
//         cout << data[i] << " ";
//     }
//     cout << endl;
// }
