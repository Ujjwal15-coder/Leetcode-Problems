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
        int length = 0;
        ListNode* temp = head;

        while(temp != nullptr){
            length++;
            temp = temp -> next;
        }

        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;

        for(int i = 1; i < length - n + 1;i++){
            prev = prev -> next;
    
        }
        ListNode* lastNode = prev -> next;
        prev -> next = lastNode -> next;
        delete lastNode;

        return dummy.next;
    }
};