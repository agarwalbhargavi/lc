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
        ListNode* curr = head;
        int count =0;
        while(curr!=nullptr){
            curr = curr->next;
            count++;
        }

        if(count==n){
            ListNode* temp = head;
            head=head->next;
            delete temp;
            return head;
        }

        ListNode* temp = head;
        for(int i=0;i<count-n-1;i++){
            temp=temp->next;
        }
        ListNode* temp1 = temp->next;
        
        temp->next = temp->next->next;
        delete temp1;
        return head;
    }
};