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

        if(head == nullptr){
            return nullptr;
        }
        
        int length = 0;

        ListNode* temp = head;
        while(temp != nullptr){
            temp = temp->next;
            length++;
        }

        if(length == n){
            head = head->next;
            return head;
        }

        ListNode* traveler = head;
        for(int i=0; i<length-n-1; i++){
            traveler = traveler->next;
        }

        if(traveler->next != nullptr){
            ListNode* remove = traveler->next;

            traveler->next = remove->next;

            delete remove;
        }

        cout << "value : " << traveler->val << endl;

        return head;
    }
};