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
    ListNode* swap(ListNode* ptr, ListNode* dummy) {

        if(ptr->next == nullptr || ptr->next->next == nullptr){
            return dummy->next;
        }

        ListNode* first = ptr->next;
        ListNode* second = ptr->next->next;

        ptr->next = second;
        first->next = second->next;
        second->next = first;

        swap(first, dummy);
        return dummy->next;
    }

    ListNode* swapPairs(ListNode* head) {

        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* pre = dummy;

        return swap(pre, dummy);
    }
};