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
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* prev = head;
        ListNode* curr = head -> next;

        ListNode* prevPair = nullptr;

        
        while(prev != nullptr && curr != nullptr){
            ListNode* next = curr -> next;
        
            curr -> next = prev;
            prev -> next = next;
            
            if(prevPair != nullptr){
                prevPair -> next = curr;
            }


            if(prev == head){
                head = curr;
            }
             prevPair = prev;

            prev = next;
            if(prev != nullptr){
                curr = prev -> next;
            }
            else{
                curr = nullptr;
            }
            
        }
        
        return head;
        
    }
};