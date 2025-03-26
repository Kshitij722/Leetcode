/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *slow = head, *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) { 
            struct ListNode *ans = head;
            while (ans != slow) {
                ans = ans->next;
                slow = slow->next;
            }
            return ans; 
        }
    }
    return NULL;
}