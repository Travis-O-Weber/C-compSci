Data Structures Implementation Project
This project implements several advanced tree data structures in C, including AVL trees, Huffman encoding trees, and Segment trees. Each implementation demonstrates different applications and algorithms in computer science.
Project Structure
The project consists of several key components:
Core Data Structures

AVL Tree: A self-balancing binary search tree implementation
Huffman Tree: Used for data compression and encoding
Segment Tree: A tree data structure for range queries
Priority Queue: Supporting data structure used by the Huffman encoding implementation

Source Files

data.h/c: Data structure definitions and utility functions
tree.h/c: Core tree implementations and operations
priorityQueue.h/c: Priority queue implementation
driver.c: Main program and test cases

Features
AVL Tree

Self-balancing binary search tree
Supports insertion and deletion with automatic rebalancing
Maintains height balance property for optimal performance
Time complexity: O(log n) for search, insert, and delete operations

Huffman Encoding

Generates optimal prefix codes for data compression
Character frequency-based encoding
Supports encoding of lowercase alphabetic characters
Provides bit string representation of encoded characters

Segment Tree

Supports efficient range queries
Line segment intersection queries
Maintains count of overlapping segments
Query time complexity: O(log n)

Usage
AVL Tree Operations
c// Create a new AVL tree
Tree* tree = createTree();
tree->type = AVL;

// Insert data
Data* data = /* create data */;
insertTreeBalanced(tree, data);

// Search for data
TNode* node = searchTree(tree, searchData);

// Remove data
Data* removed = removeTree(tree, key);
Huffman Encoding
c// Example usage from test cases
testHuffmanEncoding("aabacccadadadadda");
testHuffmanEncoding("abcdeeeeeeffffffffffff");
Segment Tree
c// Create and query segment tree
double points[] = /* array of points */;
TNode* root = constructSegmentTree(points, 0, n-1);
int intersections = lineStabQuery(root, queryPoint);
Testing
The project includes comprehensive test cases in driver.c:

Huffman encoding tests with different input strings
AVL tree insertion and removal tests
Segment tree tests with various line segment configurations

Sample test output demonstrates:

Correct Huffman encodings for test strings
AVL tree performance metrics
Segment tree intersection counts

Memory Management
The implementation includes proper memory management:

All tree nodes and data structures are dynamically allocated
Memory cleanup functions are provided for all data structures
Proper parent-child relationship maintenance in tree operations

Build and Run
To compile the project:
bashgcc -o tree_program driver.c tree.c data.c priorityQueue.c
To run the program:
bash./tree_program
Error Handling
The implementation includes various error checks:

Null pointer validation
Balance verification for AVL trees
Memory allocation checks
Tree property validation

Performance Considerations

AVL tree maintains O(log n) height for efficient operations
Huffman encoding generates optimal prefix codes
Segment tree provides efficient range query operations
Priority queue supports efficient Huffman tree construction

Limitations

Huffman encoding limited to lowercase alphabetic characters
AVL tree key comparisons are string-based
Segment tree requires pre-sorted point array input
