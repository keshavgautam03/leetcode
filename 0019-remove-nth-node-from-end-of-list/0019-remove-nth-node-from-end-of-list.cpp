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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast=head;
        for(int i=0;i<n;i++){
            fast=fast->next;

        }
        if(fast==NULL){
            return head->next;
        }
        ListNode* slow= head;
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* temp2 = slow->next;
        slow->next=slow->next->next;
        delete temp2;
        return head;




        // BEKARR APPROACH
        // if(head==NULL){
        //     return NULL;
        // }
        // ListNode* curr=head;
        // int size=0;
        // while(curr!=NULL){
        //     size++;
        //     curr=curr->next;
        // }
        // if (n == size) {
        //     ListNode* toDelete = head;
        //     head = head->next;
        //     delete toDelete;
        //     return head;
        // }   
        // ListNode* temp=head;
        // for(int i=0;i<size-n-1;i++){
        //     temp=temp->next;
        // }
        // ListNode* temp2=temp->next;
        // temp->next=temp->next->next;
        // delete temp2;
        // return head;
    }
};