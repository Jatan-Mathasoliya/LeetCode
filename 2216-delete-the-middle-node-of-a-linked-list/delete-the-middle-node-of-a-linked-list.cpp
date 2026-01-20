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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return nullptr;
        ListNode* temp = head;
        int len = 1;

        while(temp->next != nullptr){
            temp = temp->next;
            len++;
        }

        int middleInd = len/2;

        ListNode* midNode = head;

        for(int i=1; i<middleInd; i++){
            midNode = midNode->next;
        }

        ListNode* toDelete = midNode->next;
        midNode->next = toDelete->next;

        delete toDelete;

        return head;
    }

};