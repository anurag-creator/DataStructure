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
Node* DeleteKthOfACircularLL(Node* Head,int i){
      if(Head==NULL) return NULL;
      if(i==1) return  DeleteHeadOfCircularLL2(Head);
      
      Node* curr=Head;
      for(int pos=0;pos<i-2;pos++){
          curr=curr->next;
          pos++;
      }
      Node* temp=curr->next;
      curr->next=curr->next->next;
      delete(temp);
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
     Node* Head1=DeleteKthOfACircularLL(head,1);
    // Node* Head1=DeleteHeadOfCircularLL2(head);
     printCircularLL(Head1);
     return 0;
}