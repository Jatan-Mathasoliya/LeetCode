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
    ListNode* middleNode(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;

        while(temp != nullptr){
            ans.push_back(temp->val);
            temp = temp -> next;
        }
        int mid = ans.size() / 2;

        ListNode* temp1 = head;
        int var = 0;

        while(var != mid){
            var += 1;
            temp1 = temp1->next;
        }
        return temp1;
    }
};