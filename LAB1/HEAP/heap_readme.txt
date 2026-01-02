EXPERIMENT TITLE
Implementation of Min Heap Using Heapify Down Method in C

OBJECTIVE
To implement a Min Heap using an array representation in C and construct the heap using the Heapify Down technique.

PROBLEM STATEMENT
Given a set of elements stored in an array, design and implement a program to convert the array into a Min Heap such that every parent node is smaller than or equal to its child nodes.

THEORY

A Heap is a complete binary tree that satisfies the heap property.
In a Min Heap, the value at each parent node is less than or equal to the values of its children.

Heap Representation:
• Stored using an array
• Index starts from 1
• Left child index = 2 × i
• Right child index = 2 × i + 1

The Heapify Down process is used to restore the heap property when a node violates the min heap condition. This method compares a node with its children and swaps it with the smallest child if necessary.

To build a heap efficiently, heapify is applied from the last non-leaf node up to the root.

ALGORITHM

Read the number of elements (n).

Read n elements into an array starting from index 1.

Print the inserted heap (array form).

For each non-leaf node from n/2 down to 1:
a. Compare the node with its left and right children.
b. Swap with the smallest child if the heap property is violated.
c. Recursively apply heapify down.

Print the heapified array representing the Min Heap.

INPUT

• Number of elements (n)
• n integer values

OUTPUT

• Array representation before heapification
• Array representation after heapification (Min Heap)

SAMPLE INPUT

Enter the no. of elements to be inserted in heap
6
Enter Heap elements:
10 5 30 2 8 15

SAMPLE OUTPUT

Inserted Heap (Array):
10 5 30 2 8 15

Heapified Heap (Min-Heap):
2 5 15 10 8 30

TIME COMPLEXITY

Building heap using heapify down:

• Heapify on one node: O(log n)
• Heap construction: O(n)

Overall Time Complexity:
O(n)

SPACE COMPLEXITY

• Uses a fixed-size array
• No extra data structures

Space Complexity:
O(n)

ADVANTAGES

Efficient heap construction in linear time.

Simple array-based implementation.

Useful for priority queues.

Easy to understand and implement.

LIMITATIONS

Fixed array size.

Does not support dynamic insertion or deletion.

Only demonstrates Min Heap construction.

No overflow or underflow handling.

APPLICATIONS

• Priority Queues
• Heap Sort
• CPU Scheduling
• Graph algorithms (Dijkstra’s, Prim’s)
• Event-driven simulations

RESULT

The Min Heap was successfully constructed using the Heapify Down method. The resulting heap satisfies the min heap property for all elements.

CONCLUSION

This experiment demonstrates the efficient construction of a Min Heap using the heapify down approach. The method ensures optimal time complexity and forms the basis for many important algorithms and data structures.