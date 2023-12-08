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

 void insertAtTail(Node *&head, Node *&tail, int val){
    Node * newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    
 }

 int ListSize( Node *head){
    Node * temp = head;
    int size = 0;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}

  void printLinkedList( Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
 }

int minVal( Node* head){
    Node* temp = head;
    int mn = INT_MAX;
    while (temp != NULL)
    {
        if(temp->val < mn) mn = temp->val;       
        temp = temp->next;
    }
    return mn;
 }
 int maxVal( Node* head){
    Node* temp = head;
    int mx = INT_MIN;
    while (temp != NULL)
    {
        if(temp->val > mx) mx = temp->val;       
        temp = temp->next;
    }
    return mx;
 }

int main () {
    Node * head = NULL;
    Node * tail = NULL;
    Node * temp = head;
    int val, mn, mx, dif;

    while (true)
    {
        cin >> val;
        if (val == -1) break;
        insertAtTail(head,tail,val);
    }

    if (ListSize(head) > 1)
    {
        mn = minVal(head);
        mx = maxVal(head);
        dif = mx - mn;
        cout << dif;  
    }
    else{
        dif = 0;
        cout << dif;
    }
         
    return 0;
}