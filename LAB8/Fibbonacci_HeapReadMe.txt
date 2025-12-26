EXPERIMENT TITLE
Implementation of Fibonacci Heap and Its Operations Using C

OBJECTIVE
To implement a Fibonacci Heap in C and perform its fundamental operations such as insertion, finding minimum, extract minimum, decrease key, and delete key, while understanding their amortized time complexities.

PROBLEM STATEMENT
Design and implement a Fibonacci Heap data structure that supports the following operations efficiently:
• Insert a key
• Find minimum key
• Extract minimum key
• Decrease key
• Delete a key

THEORY

A Fibonacci Heap is an advanced heap data structure consisting of a collection of heap-ordered trees. Unlike binary heaps, Fibonacci Heaps delay consolidation of trees until necessary, allowing many operations to run in amortized constant time.

Each node contains pointers to its parent, child, and siblings (left and right), forming circular doubly linked lists. Nodes also maintain:
• Degree (number of children)
• Mark bit (used for cascading cuts)

The key idea behind Fibonacci Heaps is lazy merging and cascading cuts, which reduce the amortized cost of operations such as Decrease-Key and Insert.

Fibonacci Heaps are especially useful in graph algorithms like Dijkstra’s and Prim’s algorithms.

DATA STRUCTURES USED

Node Structure:
• key – value stored
• degree – number of children
• mark – indicates whether the node has lost a child
• parent, child – hierarchical links
• left, right – circular doubly linked list links

Heap Structure:
• min – pointer to minimum node
• n – total number of nodes

ALGORITHM

INSERT:

Create a new node.

Add the node to the root list.

Update the minimum pointer if required.

FIND MIN:

Return the key pointed to by the min pointer.

EXTRACT MIN:

Remove the minimum node from the root list.

Add its children to the root list.

Perform consolidation to merge trees of equal degree.

Update the minimum pointer.

DECREASE KEY:

Decrease the key value of a node.

If heap order is violated, cut the node.

Perform cascading cuts up the tree.

Update the minimum pointer.

DELETE:

Decrease the key to negative infinity.

Extract the minimum node.

INPUT

User-driven menu input:
• Values to insert
• Keys to decrease or delete
• Menu choice for operations

OUTPUT

• Minimum element
• Extracted minimum value
• Updated root list after operations
• Status messages for each operation

TIME COMPLEXITY (AMORTIZED)

Insert: O(1)
Find Minimum: O(1)
Union (not shown): O(1)
Decrease Key: O(1)
Delete: O(log n)
Extract Minimum: O(log n)

SPACE COMPLEXITY

• Each node stores constant extra pointers
• Total space usage: O(n)

ADVANTAGES

Very fast decrease-key operation.

Efficient for graph algorithms.

Amortized constant time insertion.

Better theoretical performance than binary heaps.

LIMITATIONS

Complex implementation.

Higher constant factors.

Not cache-friendly.

Rarely used in practice despite theoretical efficiency.

APPLICATIONS

• Dijkstra’s shortest path algorithm
• Prim’s minimum spanning tree
• Network optimization problems
• Advanced priority queue implementations

RESULT

The Fibonacci Heap was successfully implemented in C. All fundamental heap operations were performed correctly, and the structure maintained proper heap ordering and minimum tracking.

CONCLUSION

Fibonacci Heaps provide superior amortized performance for several heap operations, particularly Decrease-Key. Although complex to implement, they are important in theoretical computer science and advanced algorithm design.