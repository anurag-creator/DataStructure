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
int main(){
     Node* head=new Node(5);
     head->next=new Node(10);
     head->next->next=new Node(15);
     head->next->next->next=new Node(20);
     head->next->next->next->next=head;
     return 0;
}