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
        ListNode* ptr = head;
        int cnt = 0;
        while(ptr != nullptr){
            cnt++;
            ptr=ptr->next;
        }
        if(cnt == n ) return head->next;
        int k = cnt-n;
        ListNode* ptr1 = head;
        while(k>1 && ptr1!= nullptr ){
            k--;
         ptr1 = ptr1->next;
       
        }
        if( ptr1->next != nullptr)
        ptr1->next = ptr1->next->next;

       return head;
    }
};