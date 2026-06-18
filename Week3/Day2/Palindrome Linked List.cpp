class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head ==nullptr||head->next==nullptr){
            return true;
            }
            ListNode*slow= head;
            ListNode*fast=head;
            while(fast  != nullptr && fast->next!= nullptr){
                slow = slow->next;
                fast = fast->next->next;

            }
            ListNode*prv=nullptr;
            ListNode*curr= slow;
            while(curr != nullptr){
                ListNode*nextnode =curr->next;
                curr->next=prv;
                prv=curr;
                curr=nextnode;

            }
            ListNode*firsthalf=head;
            ListNode*secondhalf=prv;
            while(secondhalf!=nullptr){
                if(firsthalf->val!= secondhalf->val){
                    return false;

                }
                firsthalf=firsthalf->next;
                secondhalf=secondhalf->next;

            }
            return true;


        
        
    }
};
