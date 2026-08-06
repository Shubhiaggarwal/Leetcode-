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
    void reorderList(ListNode* head) {
        ListNode* list = head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=nullptr && fast->next != nullptr){
              slow = slow->next;
              fast = fast->next->next;
        }

      
        ListNode* curr = slow->next;
        ListNode* prev = nullptr;
       
        while(curr!=nullptr){
            ListNode* ptr = curr->next;

            curr->next = prev;
            prev = curr;
            curr = ptr;
            

        }

       ListNode* rev = prev;
       ListNode* ptr = head;
       slow->next = nullptr;
       while(rev != nullptr){
        ListNode* temp1 = ptr->next;
        ListNode* temp2 = rev->next;
        ptr->next = rev;
        rev ->next = temp1;
        rev = temp2;
        ptr = temp1;
       }
      
    }
};