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
    bool hasCycle(ListNode *head) {
        //OPTIMIZED APPROACH
        
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast !=nullptr && fast->next != nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;

        //Second method
        //  ListNode * temp=new ListNode;
        // ListNode *curr=head;
        // while(curr!=NULL){
        //     if(curr->next==NULL){
        //         return false;
        //     }
        //     else if(curr->next==temp){
        //         return true;
        //     }
        //     ListNode *curr_next=curr->next;
        //     curr->next=temp;
        //     curr=curr_next;
        // }
        // return false;


        //SET SOLUTION
        // unordered_set<ListNode *> set;
        // ListNode * curr=head;
        // while(curr!=NULL){
        //     if(set.find(curr)!=set.end()){
        //         return true;
        //     }
        //     set.insert(curr);
        //     curr=curr->next;

        // }
        // return false;
    }
};