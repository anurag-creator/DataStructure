#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
        this->data=data;
        next=NULL;
     }
};
//Method One
void printCircularLL(Node* Head){
    if(Head==NULL)return;
    cout<<Head->data<<" ";
    for(Node* i=Head->next;i!=Head;i=i->next){
        cout<<i->data<<" ";
    }
}
//Method Two
void printCircularLL2(Node* Head){
    if(Head==NULL)return;
    Node* i=Head;
    do{
        cout<<i->data<<" ";
        i=i->next;
    }while(i!=Head);
    
}
int main(){
     Node* head=new Node(5);
     head->next=new Node(10);
     head->next->next=new Node(15);
     head->next->next->next=new Node(20);
     head->next->next->next->next=head;
     //printCircularLL(head);
     printCircularLL2(head);
     return 0;
}