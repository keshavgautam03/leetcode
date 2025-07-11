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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int>pq;
        if (lists.size() == 0) return nullptr;
        if (lists.size() == 1) return lists[0];
        ListNode* head;
        for(int i=0;i<lists.size();i++){
            head = lists[i];
            while(head){
                int value=head->val;
                pq.push(value);
                head=head->next;
            }
        }
        head=nullptr;
        while(!pq.empty()){
            ListNode* temp=new ListNode(pq.top());
            pq.pop();
            temp->next=head;
            head=temp;
        }
        return head;
    }
};