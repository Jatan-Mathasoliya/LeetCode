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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head == nullptr) return head;

        vector<int> arr;
        
        ListNode* temp = head;

        while(temp != nullptr){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int i=left-1, j=right-1;
        while(i <= j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }

        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        for(int i=0; i<arr.size(); i++){
            curr->next = new ListNode(arr[i]);

            curr = curr->next;
        }

        return dummy->next;
    }
};