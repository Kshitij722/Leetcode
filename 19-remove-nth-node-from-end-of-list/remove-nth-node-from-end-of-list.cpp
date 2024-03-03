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
        ListNode* temp = head;
        int count = 0;
        
     
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        
        int key = count - n;
        
        
        temp = head;
        ListNode* prev = nullptr;
        int c = 0;
        
        
        while (temp != nullptr) {
            if (c == key) {
                if (prev == nullptr) {
                    
                    head = temp->next;
                } else {
                    prev->next = temp->next;
                }
                delete temp;
                break;
            }
            
            prev = temp;
            temp = temp->next;
            c++;
        }
        
        return head;
    }
};
