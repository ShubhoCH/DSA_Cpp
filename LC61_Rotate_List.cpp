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
 
//Time:  O(k*N);
//Space: O(1);
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL)
            return head;
        int n = 1;
        ListNode* temp = head;
        while(temp->next != NULL){
            n++;
            temp = temp -> next;
        }
        temp -> next = head;
        temp = head;
        k = k % n;
        for(int i=1;i<n-k;i++)
            temp = temp->next;
        head = temp -> next;
        temp->next = NULL;
        return head;
    }
};
