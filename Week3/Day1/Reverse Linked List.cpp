using namespace std;
class Solution{
    public:
        ListNode *reverseList(ListNode * head){
            ListNode *prev =nullptr;
             ListNode *curr = head; 
              ListNode *forward = nullptr;
              while(curr!= nullptr){
                forward = curr->next;
                curr->next = prev;
                prev= curr;
                curr=forward;

              }
              return prev;

        }
};
