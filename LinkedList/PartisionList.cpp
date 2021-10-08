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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode(0);
        ListNode* higher = new ListNode(0);
        
        ListNode* smallHead=small;
        ListNode* higherHead = higher;
        
        while(head!=NULL){
            if(head->val<x){
                //small list
                smallHead->next = head;
                smallHead = smallHead->next;
            }
            else{
                //high list
                higherHead->next = head;
                higherHead = higherHead->next;
            }
            head=head->next;
        }
        
        higherHead->next = NULL;
        smallHead->next = higher->next;
        
        return small->next;
        
    }
};