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
Node* DeleteHeadOfCircularLL(Node* Head){
     if(Head==NULL)return NULL;
     if(Head->next==Head){
         delete(Head);
         return NULL;
     }
     else{
     Node* curr=Head;
     while(curr->next!=Head)
         curr=curr->next;
    curr->next=Head->next;
    delete(Head);
    return curr->next; 
 } 

}
//Efficient Approach
Node* DeleteHeadOfCircularLL2(Node* Head){
        if(Head==NULL)return NULL;
        if(Head->next==Head){
            delete(Head);
            return NULL;
        }
        Head->data=Head->next->data;
        Node* temp=Head->next;
        Head->next=Head->next->next;
        delete temp;
        return Head;
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
    // Node* Head1=DeleteHeadOfCircularLL(head);
     Node* Head1=DeleteHeadOfCircularLL2(head);
     printCircularLL(Head1);
     return 0;
}