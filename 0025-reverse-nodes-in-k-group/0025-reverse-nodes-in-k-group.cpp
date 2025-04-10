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
    ListNode* Reverse(ListNode* head, ListNode*endNode){
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=endNode){
          
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count=0;
        ListNode* temp=head;
        while(count<k && temp){
            temp=temp->next;
            count++;
        }
        if(count<k) return head;
        ListNode*now_head=Reverse(head,temp);
        head->next=reverseKGroup(temp, k);
        return now_head;
    }
};