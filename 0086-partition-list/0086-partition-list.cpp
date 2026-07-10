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
         ListNode* low = new ListNode(100);
         ListNode* high = new ListNode(200);
         ListNode* temp = head;
         ListNode* tl = low;
         ListNode* th = high;
         while(temp!=NULL){
            if(temp->val < x){
                tl->next = temp;
                temp = temp->next;
                tl = tl->next;
            }else{
                th->next = temp;
                temp = temp->next;
                th = th->next;
            }
         }
         tl->next = high->next;
         th->next = NULL;
         return low->next;
    }
};