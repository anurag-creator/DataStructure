#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* prev;
        Node* next;
        Node(int data){
        this->data=data;
        prev=NULL;
        next=NULL;
     }
};
int main(){
   Node* Head=new Node(10);
   Node* temp1=new Node(20);
   Node* temp2=new Node(30);
   Head->next=temp1;
   temp1->prev=Head;
   temp1->next=temp2;
   temp2->prev=temp1;

}