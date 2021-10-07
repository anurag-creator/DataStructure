/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* fakeNode=new ListNode(0);
        fakeNode->next=head;
        ListNode* prev=fakeNode;
        while(prev->next!=NULL && prev->next->next!=NULL){
            if(prev->next->val==prev->next->next->val){
                int value=prev->next->val;
                while(prev->next!=NULL && prev->next->val==value){
                    prev->next=prev->next->next;
                }
            }
            else{
                prev=prev->next;
            }
        }
        return fakeNode->next;
    }
};