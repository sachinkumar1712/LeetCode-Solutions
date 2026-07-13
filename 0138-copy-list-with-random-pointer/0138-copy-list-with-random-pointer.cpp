/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        //step-1 Create deep copy without random pointers
        Node* dummy = new Node(100);
        Node* tempC = dummy;
        Node* temp = head;
        while(temp!=NULL){
            Node* a = new Node(temp->val);
            tempC->next = a;
            tempC = tempC->next;
            temp = temp->next;
        }
        Node* duplicate = dummy->next;
        //step-2 Alternate connetions
        Node* a = head;
        Node* b = duplicate;
        dummy = new Node(-1);
        Node* tempD = dummy;
        while(a!=NULL){
            tempD->next = a;
            a = a->next;
            tempD = tempD->next;
            tempD->next = b;
            b = b->next;
            tempD = tempD->next;

        }
        dummy = dummy->next;
        //step-3 Assigning random pointer of duplicate
        Node* t1 = dummy;
        while(t1!=NULL){
            Node* t2 = t1->next;
            if(t1->random!=NULL){
                t2->random = t1->random->next;
            } 
            t1 = t1->next->next;
        }
        //step-4 Removing the connections(seperate)
        Node* d1 = new Node(-1);
        Node* d2 = new Node(-1);
        t1 = d1;
        Node* t2 = d2;
        Node* t = dummy;
        while(t!=NULL){
            t1->next = t;
            t = t->next;
            t1 = t1->next;
            t2->next = t;
            t = t->next;
            t2 = t2->next;
        }
        t1->next = NULL;
        t2->next = NULL;
        d1 = d1->next;//original with random
        d2 = d2->next;//duplicate with random
        return d2;

    }
};