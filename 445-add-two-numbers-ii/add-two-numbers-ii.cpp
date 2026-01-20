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

    ListNode* reverseLL(ListNode* l){
        ListNode* pre = nullptr;
        ListNode* curr = l;

        while(curr != nullptr){
            ListNode* nextNode = curr->next;

            curr->next = pre;
            pre = curr;
            curr = nextNode;
        }

        return pre;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newl1 = reverseLL(l1);
        ListNode* newl2 = reverseLL(l2);
        

        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        int carry = 0;

        while(newl1 || newl2 || carry){
            int x = newl1 ? newl1->val : 0;
            int y = newl2 ? newl2->val : 0;

            int sum = x + y + carry;

            carry = sum / 10;

            current->next = new ListNode(sum % 10);

            current = current->next;

            if(newl1) newl1 = newl1->next;
            if(newl2) newl2 = newl2->next;
        }

        return reverseLL(dummy->next);
    }
};