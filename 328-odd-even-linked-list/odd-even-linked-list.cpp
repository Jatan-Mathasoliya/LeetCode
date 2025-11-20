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
    ListNode* oddEvenList(ListNode* head) {

        if (!head || !head->next)
            return head;

        ListNode* odd = head;
        ListNode* even = head->next;

        ListNode* oddTemp = odd;
        ListNode* evenTemp = even;

        int count = 3;
        ListNode* temp = head->next->next;

        while (temp != nullptr) {
            if (count % 2 != 0) {
                oddTemp->next = temp;
                oddTemp = oddTemp->next;
            } else {
                evenTemp->next = temp;
                evenTemp = evenTemp->next;
            }
            temp = temp->next;
            count++;
        }
        
        evenTemp->next = nullptr;
        oddTemp->next = even;

        return odd;
    }
};