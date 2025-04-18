class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //better solution but works only when there is a sure intersection node
        ListNode* ptr1=headA;
        ListNode* ptr2=headB;
        while(ptr1!=ptr2){
            if(ptr1!=NULL){
                ptr1=ptr1->next;
            }
            else{
                ptr1=headB;
            }
            if(ptr2!=NULL){
                ptr2=ptr2->next;
            }
            else{
                ptr2=headA;
            }
        }
        return ptr2;

		// int n = 0;
		// int m = 0;
		// ListNode* ptr1 = headA;
		// ListNode* ptr2 = headB;
		// while(ptr1 != NULL){
		// 	n++;
		// 	ptr1 = ptr1 -> next;
		// }
		// while(ptr2 != NULL){
		// 	m++;
		// 	ptr2 = ptr2 -> next;
		// }
		// int t = abs(n - m);
		// if(n > m){
		// 	while(t){
		// 		headA = headA -> next;
		// 		t--;
		// 	}
		// }
		// else{
		// 	while(t){
		// 		headB = headB -> next;
		// 		t--;
		// 	}
		// }
		// while(headA != NULL and headB != NULL){
		// 	if(headA == headB){
		// 		return headA;
		// 	}
		// 	headA = headA -> next;
		// 	headB = headB -> next;
		// }
		// return NULL;
	}
};