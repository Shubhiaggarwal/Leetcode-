class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* ptr = l1;
        ListNode* ptr2 = l2;
        
        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;
        
        int curri = 0;

        while (ptr != nullptr && ptr2 != nullptr) {
            
            int a = ptr->val;
            int b = ptr2->val;
            
            int sum = a + b + curri;
            
            if (sum > 9) {
                curri = 1;
                sum = sum % 10;
            }
            else {
                curri = 0;
            }

            curr->next = new ListNode(sum);
            curr = curr->next;

            ptr = ptr->next;
            ptr2 = ptr2->next;
        }

        while (ptr != nullptr) {
            
            int sum = ptr->val + curri;
            
            if (sum > 9) {
                curri = 1;
                sum = sum % 10;
            }
            else {
                curri = 0;
            }

            curr->next = new ListNode(sum);
            curr = curr->next;

            ptr = ptr->next;
        }

        while (ptr2 != nullptr) {
            
            int sum = ptr2->val + curri;
            
            if (sum > 9) {
                curri = 1;
                sum = sum % 10;
            }
            else {
                curri = 0;
            }

            curr->next = new ListNode(sum);
            curr = curr->next;

            ptr2 = ptr2->next;
        }

        if (curri == 1) {
            curr->next = new ListNode(1);
        }

        return dummy->next;
    }
};