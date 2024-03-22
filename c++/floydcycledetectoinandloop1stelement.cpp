/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* floydDetect(ListNode *head){
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* temp=NULL;
        if(fast->next==NULL){
            return NULL;
        }
        
        while (fast!=NULL && slow!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow= slow->next;

            if(fast==slow){
                temp=slow;
                
                break;
                }
        }
         return temp;   
    }
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast=floydDetect(head);
        if (fast==NULL){
            return nullptr;
        }
        ListNode* slow = head;
        ListNode* ans;
        while (slow!=fast){
            fast=fast->next;
            slow=slow->next;
            }
        return slow;
        }
};
