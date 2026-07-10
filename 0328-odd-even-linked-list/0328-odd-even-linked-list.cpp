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
    ListNode* oddEvenList(ListNode* head) {
       if(head == NULL) return NULL;
       ListNode* odd = new ListNode(100);
       ListNode* even = new ListNode(200);

       ListNode* temp = head;

       ListNode* todd = odd;
       ListNode* teven = even;
       int pos = 1;
       
       while(temp!=NULL){
          if(pos%2!=0){
            todd->next=temp;
            temp=temp->next;
            todd=todd->next;
            pos++;
          }else{
            teven->next = temp;
            temp=temp->next;
            teven = teven->next;
            pos++;
          }
       }
       todd->next=even->next;
       teven->next = NULL;
       return odd->next;

    }
};