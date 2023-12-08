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

int findXIndex(Node * head, int x){
    Node * temp = head;
    int count = 0;
    while (temp != NULL)
    {
        if( temp->val == x){
           return count; 
        } 
        temp = temp->next;
        count++;
    }  
   return -1; 
}

int main () {

    int t;
    cin >> t;
    while (t--)
    {
        Node * head = NULL;
        Node * tail = NULL;
        int val;  
        while (true)
        {
            cin >> val;
            if (val == -1) break;
            insertAtTail(head,tail,val);
        } 
        int x;
        cin >> x;
        cout << findXIndex(head,x) << endl;       
    }

    return 0;
}