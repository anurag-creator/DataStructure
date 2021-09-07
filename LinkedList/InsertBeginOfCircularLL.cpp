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

//Naive Approach
Node* InsertBeginOfCircularLL(Node* Head,int x){
    Node* temp=new Node(x);
    if(Head==NULL){
        temp->next=Head;
    }
    else{
       Node* curr=Head;
       while(curr->next!=Head)
           curr=curr->next;
        curr->next=temp;
        temp->next=Head;
    }
    return temp;   
}
//Efficient Approach
Node* InsertBeginOfCircularLL2(Node* Head,int x){
        Node* temp=new Node(x);
        if(Head==NULL){
            temp->next=temp;
            return temp;
        }
        else{
            temp->next=Head->next;
            Head->next=temp;
            int t=Head->data;
            Head->data=temp->data;
            temp->data=t;
            return Head;
        }
}

//Print Circular LL
void printCircularLL(Node* Head){
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
     Node* Head1=InsertBeginOfCircularLL2(head,2);
     printCircularLL(Head1);
     return 0;
}