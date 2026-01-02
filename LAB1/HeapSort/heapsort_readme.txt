EXPERIMENT TITLE
Implementation of HeapSort Method in C

OBJECTIVE
To implement insertion operation in a Min Heap using the Heapify Up technique and to maintain the heap property after each insertion.

PROBLEM STATEMENT
Design and implement a program to insert elements into a Min Heap represented using an array such that after each insertion, the heap property is preserved using the heapify up method.

THEORY

A Heap is a complete binary tree that satisfies the heap property.
In a Min Heap, the key of every parent node is less than or equal to the keys of its child nodes.

Array Representation of Heap:
• Heap is stored in an array starting from index 1
• Parent of node at index i = i / 2
• Left child = 2 × i
• Right child = 2 × i + 1

When a new element is inserted:

It is placed at the end of the array.

The Heapify Up operation is applied.

The element is repeatedly compared with its parent and swapped if it violates the min heap property.

ALGORITHM

INSERT OPERATION:

Check if heap is full.

Increase heap size by 1.

Insert the new element at the end of the heap.

Compare the inserted element with its parent.

If the parent is greater, swap them.

Repeat until heap property is satisfied or root is reached.

INPUT

• Number of elements to be inserted
• Integer values to be inserted into the heap

OUTPUT

• Heap array after each insertion

SAMPLE INPUT

Enter number of elements to insert:
5

Enter value: 20
Enter value: 5
Enter value: 15
Enter value: 2
Enter value: 10

SAMPLE OUTPUT

Heap array: 20
Heap array: 5 20
Heap array: 5 20 15
Heap array: 2 5 15 20
Heap array: 2 5 15 20 10

TIME COMPLEXITY

Insertion in Min Heap:
• Heapify Up takes O(log n) time

Overall Time Complexity per insertion:
O(log n)

SPACE COMPLEXITY

• Uses a fixed-size array of size MAX

Space Complexity:
O(n)

ADVANTAGES

Efficient insertion operation.

Simple array-based implementation.

Maintains heap property after every insertion.

Useful for priority queue implementation.

LIMITATIONS

Fixed maximum heap size.

No deletion operation implemented.

Heap overflow possible if size exceeds limit.

Only supports Min Heap.

APPLICATIONS

• Priority Queues
• Scheduling algorithms
• Heap Sort
• Graph algorithms (Dijkstra’s, Prim’s)

RESULT

The Min Heap insertion operation using the Heapify Up method was successfully implemented. The heap property was maintained correctly after each insertion.

CONCLUSION

This experiment demonstrates how the Heapify Up technique ensures the correct structure of a Min Heap during insertion. The method is efficient and forms the foundation of priority queue operations.