/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr){
            return NULL;
        }
        ListNode* current = head;
        unordered_set<ListNode*> isVisited;
        while(current != nullptr){
            if(isVisited.find(current) != isVisited.end()){
                return current;
            }
            isVisited.insert(current);
            current = current -> next;
        }
        return NULL;
    }
};