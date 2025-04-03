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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>vec;

        while(list1!=NULL){
            vec.push_back(list1->val);
            list1=list1->next;
        }
        while(list2!=NULL){
            vec.push_back(list2->val);
            list2=list2->next;
        }
        sort(vec.begin(),vec.end());
        ListNode* temp=new ListNode();
        ListNode* dummy=temp;
        for(int val : vec){
            temp->next=new ListNode(val);
            temp=temp->next;
        }
        return dummy->next;
    }
};