#include <bits/stdc++.h>

using namespace std;

 class Node {
     public:
        int val;
        Node* next;
        Node* prev;
 
     Node(int val) {
         this->val = val;
         this->next = NULL;
         this->prev = NULL;
     }
 };


  void printLinkedList( Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
 }

 void printLinkedListReverse(Node *tail){
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
 }

 void insertAtPosition(Node *head, int v, int pos){
    Node *temp = head;
    Node *newNode = new Node(v);
    for (int i = 1; i <= pos -1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp; 

 }

 void insertAtHead(Node *&head, int v, int pos){
    Node *newNode = new Node(v);

    if(head == NULL){
        head = newNode;
        return;
    }

    head->prev = newNode;
    newNode->next = head;
    head = newNode;
 }

int main () {

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;
    int pos;
    cin >> pos;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    if(pos == 0) insertAtHead(head,40,pos);
    else insertAtPosition(head,40,pos);

    printLinkedList(head);
    printLinkedListReverse(tail);
    return 0;
}