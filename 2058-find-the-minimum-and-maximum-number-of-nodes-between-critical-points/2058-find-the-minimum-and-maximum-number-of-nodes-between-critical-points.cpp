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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        if(head == NULL || head->next == NULL || head->next->next == NULL)
            return {-1,-1};

        ListNode* a = head;
        ListNode* b = head->next;
        ListNode* c = head->next->next;

        int idx = 1;
        int first = -1;
        int last = -1;
        int minDist = INT_MAX;
        int maxDist = -1;

        while(c != NULL){

            if((b->val > a->val && b->val > c->val) ||
               (b->val < a->val && b->val < c->val)){

                if(first == -1){
                    first = idx;
                    last = idx;
                }
                else{
                    minDist = min(minDist, idx - last);
                    maxDist = idx - first;
                    last = idx;
                }
            }

            a = a->next;
            b = b->next;
            c = c->next;
            idx++;
        }

        if(maxDist == -1)
            return {-1,-1};

        return {minDist, maxDist};
    }
};