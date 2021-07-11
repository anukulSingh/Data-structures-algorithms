#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node (int x) {
        data = x;
        next = NULL;
    }
};

// here copy of head ptr variable is passed
void printList(Node *head) {
    Node *curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
// // recursive traversal
// void rprint(Node *head) {
//     if (head == NULL) return;
//     cout << head->data << " ";
//     rprint(head->next);
// }

// Insert at beggining
// Node *insertAtStart(Node *head, int x) {
//     Node *temp = new Node(x);
//     if (head == NULL) return temp;
//     temp->next = head;
//     return temp;
// }

// Insert at end
Node *insertAtEnd(Node *head, int x) {
    Node *temp = new Node(x);
    if (head == NULL) return temp;

    Node *curr = head;
    while(curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = temp;

    return head;
}

// delete at start
Node *deleteAtStart(Node *head, int x) {
     if (head == NULL) return NULL;

     else {
         Node *temp = head;
         delete head;
         return temp;
     }
}

// delete at tail
Node *deleteAtEnd(Node *head) {
    if (head == NULL) return  NULL;
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr->next->next != NULL) {
        curr = curr->next;
    }
    delete(curr->next);
    curr->next = NULL;
    return head;
}

// search in a linked list
int search (Node *head, int key) {
    int position = 1;
    Node *curr = head;
    while (curr != NULL) {
        if (curr->data == key)
            return position;
        else
            {
                position++;
                curr = curr->next;
            }
    }
    return -1;
}

int main() {
    // // simple ll with 3 nodes
    // Node *head = new Node(10);
    // Node *temp1 = new Node(20);
    // Node *temp2 = new Node(30);
    // head->next = temp1;
    // temp1->next = temp2;
    // printList(head);

    // // alternate implementation
    // Node *head = new Node(10);
    // head->next = new Node(20);
    // head->next->next = new Node(30);
    // // printList(head);
    // rprint(head);

    // Insert at start
    // Node *head = NULL;
    // head = insertAtStart(head, 40);
    // head = insertAtStart(head, 20);
    // head = insertAtStart(head, 0);
    // printList(head);

    // Insert at end
    Node *head = NULL;
    head = insertAtEnd(head, 40);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 0);
    printList(head);
}
