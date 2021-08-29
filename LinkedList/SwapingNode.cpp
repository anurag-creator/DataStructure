class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* temp1=head;
        ListNode* endtemp=head;
        while(k>1){
            temp=temp->next;
            temp1=temp1->next;
            k--;
        }
        while(temp1->next){
            endtemp=endtemp->next;
            temp1=temp1->next;
        }
        int swap=temp->val;
        temp->val=endtemp->val;
        endtemp->val=swap;
        return head;
    }
};