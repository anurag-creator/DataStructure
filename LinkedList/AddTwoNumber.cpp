class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       int carry=0;
        if(l1==NULL)
         return l2;
        else if(l2==NULL)
         return l1;
         ListNode *l3=NULL,*h3=NULL;
         int x=l1->val+l2->val;
         l3=new ListNode(x%10);
         carry=x/10;
         h3=l3;
         l1=l1->next;l2=l2->next;
         while(l1!=NULL&&l2!=NULL){
             x=l1->val+l2->val+carry;
             h3->next=new ListNode(x%10);
             carry=x/10;
             h3=h3->next;
             l1=l1->next;l2=l2->next;
         }
         if(l1==NULL&&l2==NULL){
             if(carry==0) return l3;
             h3->next=new ListNode(carry);
             return l3;
         }
         if(l1==NULL&&l2!=NULL){
             while(l2!=NULL){
                 x=carry+l2->val;
                 h3->next=new ListNode(x%10);
                 carry=x/10;
                 h3=h3->next;
                 l2=l2->next;
             }
             if(carry) h3->next=new ListNode(carry);
             return l3;
         }
          while(l1!=NULL){
                 x=carry+l1->val;
                 h3->next=new ListNode(x%10);
                 carry=x/10;
                 h3=h3->next;
                 l1=l1->next;
             }
             if(carry) h3->next=new ListNode(carry);
             return l3;
    }
};