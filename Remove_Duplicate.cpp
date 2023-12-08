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

 void removeDuplicate(Node *head){
    Node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        Node *nestedTemp = temp;
        while (nestedTemp->next != NULL)
        {
            if (temp->val == nestedTemp->next->val)
            {
                Node *deleteNode = nestedTemp->next;
                nestedTemp->next = nestedTemp->next->next;
                delete deleteNode;
            }
            else{
                nestedTemp = nestedTemp->next;
            }
        }       
        temp = temp->next;
    }
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

int main () {
    Node * head = NULL;
    Node * tail = NULL;   
    int v;  
    while (true)
    {
        cin >> v;
        if (v == -1) break;
        insertAtTail(head,tail,v);
    }

    removeDuplicate(head);
    printLinkedList(head);

    return 0;
}