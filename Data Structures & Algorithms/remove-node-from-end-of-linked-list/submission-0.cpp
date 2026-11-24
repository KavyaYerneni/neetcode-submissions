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
        int length =0;
        ListNode* curr = head;
        while(curr){
            length++;
            curr = curr->next;
        }
        int newLength = length - n;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        curr = dummy;
        while(newLength){
            curr = curr->next;
            newLength--;

        }
        curr->next = curr->next->next;
        return dummy->next;
    }
};
