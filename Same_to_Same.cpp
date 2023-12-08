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

int same_to_same(Node * head1, Node * head2){
    Node * temp1 = head1;
    Node * temp2 = head2;

    if(ListSize(temp1) != ListSize(temp2)) return 1;
    
    while (temp1 != NULL && temp2 != NULL)
    {
        if(temp1->val != temp2->val) return 1;

        temp1 = temp1->next;
        temp2 = temp2->next;
    }
   return 0; 
}

int main () {
    Node * head1 = NULL;
    Node * tail1 = NULL;
    Node * head2 = NULL;
    Node * tail2 = NULL;
    int val1,val2;  
    while (true)
    {
        cin >> val1;
        if (val1 == -1) break;
        insertAtTail(head1,tail1,val1);
    }

    while (true)
    {
        cin >> val2;
        if (val2 == -1) break;
        insertAtTail(head2,tail2,val2);
    }

    int flag;
    flag = same_to_same(head1,head2);
    if(flag == 0) cout << "YES";
     else cout << "NO";
      
    return 0;
}