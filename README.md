# Doubly-Linked-List-in-C-
The concept of Doubly Linked List in C++

As we have learned about the structure of a linked list node, it will remain the same in this style of linked list except for one extra component.

struct node{
  int data;
  node* next;
  node* prev;
}

Logically, it has the same mechanic way as a singly linked list. However, every node is capable of linking with the next and previous node.
