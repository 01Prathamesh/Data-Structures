# Linked List Operations

This project demonstrates basic operations on Singly Linked Lists (SLL) and Doubly Linked Lists (DLL) in C. It provides functionalities to create, modify, and delete nodes in both types of linked lists.

## Project Structure

- **`main.c`**: Contains the main function that handles user interactions and calls functions to modify linked lists.
- **`SLL.h`**: Header file declaring functions and data structures for Singly Linked List operations.
- **`SLL.c`**: Source file implementing functions for Singly Linked List operations.
- **`DLL.h`**: Header file declaring functions and data structures for Doubly Linked List operations.
- **`DLL.c`**: Source file implementing functions for Doubly Linked List operations.

## Functions

### Singly Linked List (SLL)

- **`SNode* CreateSLL()`**: Creates and returns a new Singly Linked List with 10 nodes, initialized with values from 1 to 10.
- **`void printSLL()`**: Prints the current state of the Singly Linked List.
- **`void AddNode_SLL()`**: Adds a new node to the Singly Linked List at a specified position (beginning, end, or inside). It prompts the user for the node value and position.
- **`void DeleteNode_SLL()`**: Deletes a node from the Singly Linked List. The user can specify whether to delete the first node, last node, or a node with specific data.
- **`void count_SLL()`**: Counts and displays the index of a node with the specified data value.
- **`void Modify_SLL()`**: Provides a menu-driven interface to modify the Singly Linked List by adding, deleting, or counting nodes.

### Doubly Linked List (DLL)

- **`DNode* CreateDLL()`**: Creates and returns a new Doubly Linked List with 10 nodes, initialized with values from 11 to 20.
- **`void printDLL()`**: Prints the current state of the Doubly Linked List.
- **`void AddNode_DLL()`**: Adds a new node to the Doubly Linked List at a specified position (beginning, end, or inside). It prompts the user for the node value and position.
- **`void DeleteNode_DLL()`**: Deletes a node from the Doubly Linked List. The user can specify whether to delete the first node, last node, or a node with specific data.
- **`void count_DLL()`**: Counts and displays the index of a node with the specified data value.
- **`void Modify_DLL()`**: Provides a menu-driven interface to modify the Doubly Linked List by adding, deleting, or counting nodes.

## Compilation and Execution

1. **Compile the Project**

   To compile the project, use the `gcc` command to compile the source files into an executable:

   ```bash
   gcc -o linked_list main.c SLL.c DLL.c

2. **Run the Executable**
    
    After compilation, run the executable:

    ```bash
    ./linked_list

Follow the on-screen prompts to interact with the linked lists.

## Detailed Usage

### Running the Program

    1. Start the Program: Run the compiled executable file as shown above.

    2. Choose Data Structure: Select whether you want to work with the Singly Linked List (SLL) or the Doubly Linked List (DLL).

    3. Select Operation: Choose an operation to perform:
            Add Node: Add a new node at the beginning, end, or inside the list.
            Delete Node: Delete a node (first, last, or by specific data).
            Count Node: Find the index of a node by its data value.

    4. Follow Prompts: Provide additional details as prompted, such as node data or position.

### Example
    1. Adding a Node:
            Run the program.
            Choose to modify the Singly Linked List.
            Select "Add Node."
            Specify the node data and where you want to add it (beginning, end, or inside).
        
    2. Deleting a Node:
            Run the program.
            Choose to modify the Doubly Linked List.
            Select "Delete Node."
            Choose which node to delete (first, last, or by data).

    3. Counting a Node:
            Run the program.
            Choose to modify the Singly Linked List.
            Select "Count Node."
            Enter the data of the node to find its index.

## Notes
        Ensure that the source files SLL.c and DLL.c are correctly implemented as per the header files SLL.h and DLL.h to avoid compilation errors.
        Make sure to handle edge cases such as empty lists or invalid node data appropriately.

## Contributing
        If you would like to contribute to this project, please fork the repository and submit a pull request with your changes.


This `README.md` will provide users with a clear understanding of your project and how to use it. Let me know if you need any more help or adjustments!
