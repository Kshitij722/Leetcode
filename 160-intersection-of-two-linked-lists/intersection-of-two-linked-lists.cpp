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
        ListNode* dummy1 = headA;
        ListNode* dummy2 = headB;
        int c1=0,c2=0;
        while(dummy1!=NULL || dummy2!=NULL){
            if(dummy1!=NULL){
                c1++;
                dummy1=dummy1->next;
            }
            if(dummy2!=NULL){
                c2++;
                dummy2=dummy2->next;
            }
        }
        int n;
        dummy1 = headA;
        dummy2 = headB;
        if(c1>c2){
            n = c1-c2;
            for(int i=0;i<n;i++){
            dummy1=dummy1->next;
        }
        }
        else{
            n = c2-c1;
            for(int i=0;i<n;i++){
            dummy2=dummy2->next;
        }
        }
    
        while(dummy1!=NULL && dummy2!=NULL){
             if(dummy1 == dummy2){
                return dummy1;
             }
             else{
                dummy1 = dummy1->next;
                dummy2 = dummy2->next;
             }
        }
        return NULL;
    }
};