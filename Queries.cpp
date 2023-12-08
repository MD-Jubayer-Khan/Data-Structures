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

 void insertAtHead(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}


  void insertAtTail(Node *&head, int val){
    Node * newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
 }

 void deleteVth(Node *head, int vth)
{
    Node *tmp = head;

    if( head == NULL) return;

    for (int i = 1; i <= vth - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL) return;
    }
    if (tmp->next == NULL)return;

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void deleteHead(Node *&head)
{
    if( head == NULL) return;
    
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
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
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
           int v;
           cin >> v;
           insertAtHead(head, v);
           printLinkedList(head);
        }
        else if (x == 1)
        {
            int v;
            cin >> v;
            insertAtTail(head,v);
            printLinkedList(head);
            
        }
        else if (x == 2)
        {
            int v;
            cin >> v;
            if(v == 0)
                deleteHead(head);
            else 
                deleteVth(head, v);
            
            printLinkedList(head);  
        }
    }   
    return 0;
}