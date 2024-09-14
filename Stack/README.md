# Stack Implementation Code

# Overview
The provided code implements a basic stack data structure in C++ using a class-based approach. The stack is a fundamental data structure that operates on a Last-In-First-Out (LIFO) principle, where the most recently added item is the first to be removed. This implementation supports basic stack operations, including push, pop, and inspection of the stack's state.

# Components
1) Header File (stack.h):

      Purpose: Defines the Stack class, its static members, and its public methods.

      Static Members:

         data[MAX]: A static array to store stack elements. The MAX constant defines the maximum stack size.
         top: An integer to keep track of the index of the top element in the stack.
         TOS: A pointer to the top element of the stack.

      Public Methods:

         static void init(): Initializes the stack by setting top to -1, indicating that the stack is empty, and setting TOS to point to data[top].
         static void push(): Adds a new element to the top of the stack. It prompts the user for input and updates the top and TOS accordingly.
         static void pop(): Removes the top element from the stack and displays it. It also updates top and TOS.
         static void print_stack(): Prints all elements currently in the stack from the bottom to the top.
         static void print_top(): Displays the element at the top of the stack without removing it.


2) Source File (stack.cpp):
      
      Purpose: Implements the methods declared in stack.h.
      
      Method Implementations:

         init(): Resets the stack to an empty state.
         push(): Handles the addition of a new element to the stack, with overflow checks.
         pop(): Handles the removal of the top element from the stack, with underflow checks.
         print_stack(): Iterates through the stack and prints each element.
         print_top(): Displays the top element of the stack, if it exists.

4) Main File (main.cpp):

      Purpose: Provides an interactive user interface to perform various stack operations.

      Functionality:

         work(): Prompts the user to select an operation (push, pop, print stack, print top, exit) and performs the selected operation.
         main(): Initializes the stack and enters an infinite loop to continuously process user commands until the program is exited.

# Code Flow

1) Initialization: The stack is initialized with Stack::init(), setting it to an empty state.

2) User Interaction: The work() function interacts with the user, allowing them to choose between pushing a new element, popping the top element, printing the stack, or viewing the top element.

3) Operations:

         Push: Adds a new element to the stack if there is space.
         Pop: Removes the top element from the stack if it is not empty.
         Print Stack: Displays all elements currently in the stack.
         Print Top: Shows the current top element without removing it.

# Use Cases
This implementation is useful for educational purposes to understand basic stack operations.
It can be extended or integrated into larger systems requiring stack operations, such as expression evaluation or function call management.
