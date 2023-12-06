#include <bits/stdc++.h>

using namespace std;
 
 class Node {
     public:
        int val;
        Node* next;
 
     Node(int val) {
         this->val = val;
         this->next = NULL;
     }
 };

 void print_LinkedList( Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
 }

 void insert_in_linkedList(Node* head, int val, int pos){
    Node* newNode = new Node(val);
    Node* temp = head;
    for (int i = 1; i < pos -1; i++)
    {
       temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    
 }

int main () {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    insert_in_linkedList(head,60,2);

    print_LinkedList(head);
    
    return 0;
}