// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* slow=head;
//         ListNode* fast=head;
//         if (head == NULL || head->next == NULL)
//         return false;
//         while(fast!=NULL && slow!=NULL){
//             fast=fast->next;
//             if (fast!=NULL){
//                 fast=fast->next;}
//             slow=slow->next;

//             if(slow==fast){
//                 return 1;
//             }

//         }
//         return 0;
//     } 
// };
