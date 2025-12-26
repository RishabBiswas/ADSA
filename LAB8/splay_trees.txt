EXPERIMENT TITLE
Implementation of Splay Tree and Its Operations Using C

OBJECTIVE
To implement a Splay Tree in C and perform fundamental operations such as insertion, deletion, and searching, while understanding the self-adjusting behavior and amortized time complexity of splay trees.

PROBLEM STATEMENT
Design and implement a Splay Tree data structure that supports the following operations:
• Insert a key
• Delete a key
• Search a key (with splaying)
• Display the tree using inorder traversal

THEORY

A Splay Tree is a self-adjusting binary search tree in which recently accessed elements are moved closer to the root using a process called splaying. Unlike AVL or Red-Black trees, splay trees do not store balance information. Instead, they rely on rotations performed during access operations to maintain good performance.

The key idea is that frequently accessed elements should be faster to access again. After every search, insertion, or deletion, the accessed node is splayed to the root using tree rotations.

Types of rotations used in splaying:

Zig (single rotation)

Zig-Zig (double rotation in same direction)

Zig-Zag (double rotation in opposite direction)

Although a single operation may take O(n) time in the worst case, the amortized time complexity of splay tree operations is O(log n).

DATA STRUCTURE USED

Node Structure:
• key – value stored in the node
• left – pointer to left child
• right – pointer to right child

The tree maintains the Binary Search Tree see property:
Left subtree keys < Root key < Right subtree keys

ALGORITHM

SPLAY OPERATION:

If the key is at the root or tree is empty, return root.

If key lies in left subtree:
a. Perform Zig-Zig (LL) or Zig-Zag (LR) rotations.

If key lies in right subtree:
a. Perform Zig-Zig (RR) or Zig-Zag (RL) rotations.

Rotate the accessed node to the root.

INSERT:

If tree is empty, create a new node.

Splay the tree with the given key.

If key already exists, return root.

Otherwise, create a new node and attach existing tree accordingly.

DELETE:

Splay the tree using the key to be deleted.

If key is not found, return tree.

If found, remove the root and join left and right subtrees.

SEARCH:

Splay the tree with the search key.

The searched node becomes the root.

INPUT

User-driven menu input:
• Values to insert
• Values to delete
• Values to search

OUTPUT

• Confirmation messages for insert, delete, and search
• Root value after splaying
• Inorder traversal of the tree

TIME COMPLEXITY (AMORTIZED)

Insert: O(log n)
Search: O(log n)
Delete: O(log n)

Worst-case time for a single operation: O(n)
Amortized time over a sequence of operations: O(log n)

SPACE COMPLEXITY

• One node per key
• No extra balancing information

Space Complexity:
O(n)

ADVANTAGES

Simple implementation compared to balanced trees.

No need to store balance factors.

Frequently accessed elements become faster to access.

Good amortized performance.

LIMITATIONS

Worst-case time for a single operation is O(n).

Tree structure changes after every access.

Not suitable when strict worst-case guarantees are required.

Inorder traversal does not reflect tree balance.

APPLICATIONS

• Caching systems
• Memory management
• Implementing dictionaries and symbol tables
• Situations with non-uniform access patterns

RESULT

The Splay Tree was successfully implemented in C. All operations correctly adjusted the tree structure using splaying, and inorder traversal maintained sorted order.

CONCLUSION

Splay Trees provide an efficient and adaptive data structure with good amortized performance. By dynamically adjusting the tree based on access patterns, they are well-suited for applications where some elements are accessed more frequently than others.