1. Implement linked list by use of structure
```c
    struct Node
    {
        int data;
        struct Node* next;
    }
```

2. Types of Linked List 
- > Singly Linked List : Also known as linear linked list . It has one node having data and pointer heading to next node. Traversal is done in one direction is only.

- > Doubly Linked List : It had a node having single data and two pointers ,one to point previous node (LPTR) and another to point to next node (RPTR). Traversal is bi-directional means both forward and backward.