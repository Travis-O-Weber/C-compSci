# Binary Search Tree Implementation in C

## Overview
A comprehensive implementation of a Binary Search Tree (BST) data structure in C, featuring various traversal methods and fundamental BST operations. The program allows users to create, manipulate, and traverse a binary search tree.

## Features
- Dynamic node creation and insertion
- Multiple tree traversal options:
  - Preorder traversal
  - Inorder traversal
  - Postorder traversal
- Node deletion and memory management
- Value searching functionality
- Complete tree deletion

## Project Structure
- `bst.h` - Header file containing BST structure and function declarations
- `bst.c` - Implementation of BST operations
- `main.c` - Main program interface for user interaction

## Data Structure
```c
typedef struct BSTNode {
    int value;
    struct BSTNode *left;
    struct BSTNode *right;
} BSTNode;
Core Functions

create(int v) - Creates a new BST node
insert(BSTNode* r, BSTNode* n) - Inserts a new node into the tree
find(BSTNode* root, int key) - Searches for a value in the tree
removeNode(BSTNode* root, int key) - Removes a specific node
deleteBST(BSTNode* r) - Deletes entire tree
traverseBST(BSTNode* r, enum BSTOrder order) - Traverses tree in specified order

Usage
Compilation
bashgcc main.c bst.c -o bst_program
Running the Program
bash./bst_program
Program Flow

Enter number of nodes
Input values for each node
Select traversal order:

0: Preorder
1: Inorder
2: Postorder


View traversal results

Example
Enter the number of nodes for the tree: 3
Enter a node value: 5
Enter a node value: 3
Enter a node value: 7
Enter the order for traversal (0-Preorder, 1-Inorder, 2-Postorder): 1
Output: 3  5  7
Implementation Details

Recursive approach for traversals
Memory management with proper deallocation
Error handling for null nodes
Balanced tree operations

Memory Management

Dynamic allocation for each node
Complete tree cleanup on program termination
Memory leak prevention

Error Handling

Null pointer checks
Invalid input validation
Edge case handling in node removal

Limitations

Handles integer values only
No balancing mechanism
Basic error handling
