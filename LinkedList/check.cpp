#include<iostream>
unsing namespace std;
class Node{
public:
    int data;
    Node * next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node *reverse_linked_list_rec(Node *head)
{
    
     if(head==NULL || head->next==NULL){
        return head;
    }
    Node* temp = head;
    head = reverse_linked_list_rec(head->next);
    Node* temp1 = head;
    while(temp1->next!=NULL){
        temp1=temp1->next;    
    }
    temp1->next=temp;
    temp->next=NULL;
    return head;
}
Node* Addll(Node* head1,Node* head2){
   int  a=reverse_linked_list_rec(head1);
    int b=*reverse_linked_list_rec(head2);
}