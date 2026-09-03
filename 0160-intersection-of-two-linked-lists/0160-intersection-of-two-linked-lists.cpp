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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> isVisited;
        ListNode* current1 = headA;

        while(current1 != nullptr){
            isVisited.insert(current1);
            current1 = current1 -> next;
        }

        ListNode* current2 = headB;
        while(current2 != nullptr){
            if(isVisited.find(current2) != isVisited.end()){
                return current2;
            }
            isVisited.insert(current2);
            current2 = current2 -> next;
            
        }
        return NULL;
    }
};