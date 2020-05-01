class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode solution(0);
         ListNode *tempHead = &solution;
            int carry = 0;
            while (l1 || l2 || carry) {        
                int x = 0;
                int y = 0;
                if(l1){
                    x = l1->val;
                }
                if(l2){
                    y = l2->val;
                }

                int sum = x + y + carry;
                carry = sum / 10;
                tempHead->next = new ListNode(sum % 10);
                tempHead = tempHead->next;

                if(l1){
                    l1 = l1->next;
                }
                if(l2){
                    l2 = l2->next;
                }
            }
            return solution.next;
        
    }
};