#include <cstdlib>
#include <iostream>

using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
};

void PrintForward(node* head);
void PrintReverse(node* tail);

int main() {
    node* head; // mark the beginning
    node* tail; // mark the very end of the list
    node* n; // to build our list
    
    n = new node;
    n->data = 1;
    n->prev = NULL;
    head = n;
    tail = n;
    
    n = new node;
    n->data = 2;
    n-prev = tail;
    tail->next = n;
    tail = n;
    
    n = new node;
    n->data = 3;
    n-prev = tail;
    tail->next = n;
    tail = n;
    
    n = new node;
    n->data = 4;
    n-prev = tail;
    tail->next = n;
    tail = n;
    tail-next = NULL; // set tail at the end of the list
    
    // let's print forward and then reverse
    PrintForward(head);
    PrintReverse(tail);
    
    return 0;
}

void PrintForward(node* head)
{
    node* tenp = head;
    while (temp!=NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void PrintReverse(node* tail)
{
    node *temp = tail;
    while (temp!=NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}
