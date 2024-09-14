#include <iostream>
#include"stack.cpp"
#include "stack.h"

using namespace std;

void work() {
    int a;
    cout << "\nWhat do you want to do\n 1) PUSH \t 2) POP \t 3) PRINT \t 4) TOP \t 5) EXIT\n";
    cin >> a;
    switch (a) {
        case 1: Stack::push(); break;
        case 2: Stack::pop(); break;
        case 3: Stack::print_stack(); break;
        case 4: Stack::print_top(); break; // Added option to print the top element
        case 5: exit(0); // Graceful exit
        default: cout << "Invalid option\n"; break;
    }
}

int main() {
    Stack::init(); // Initialize stack
    while (true) {
        work();
    }
    return 0;
}


/*Code while practicing*/
// // #include <iostream>
// // #include"stack.cpp"
// // #include "stack.h"

// // using namespace std;

// // void work() {
// //     int a;
// //     cout << "\nWhat do you want to do\n 1) PUSH \t 2) POP\n";
// //     cin >> a;
// //     switch (a) {
// //         case 1: Stack::push(); break;
// //         case 2: Stack::pop(); break;
// //         default: cout << "Invalid option\n"; break;
// //     }
// // }

// // int main() {
// //     Stack::init(); // Initialize stack
// //     while (true) {
// //         work();
// //     }
// //     print_stack();
// //     return 0;
// // }


// #include <iostream>
// #include"stack.cpp"
// #include "stack.h"

// using namespace std;

// void work() {
//     int a;
//     cout << "\nWhat do you want to do\n 1) PUSH \t 2) POP \t 3) PRINT \t 4) EXIT\n";
//     cin >> a;
//     switch (a) {
//         case 1: Stack::push(); break;
//         case 2: Stack::pop(); break;
//         case 3: Stack::print_stack(); break;
//         case 4: exit(0); // Graceful exit
//         default: cout << "Invalid option\n"; break;
//     }
// }

// int main() {
//     Stack::init(); // Initialize stack
//     while (true) {
//         work();
// 
//     }
//     return 0;
// }
