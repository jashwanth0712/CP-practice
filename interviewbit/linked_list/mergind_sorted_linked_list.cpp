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
    ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
        if(A==NULL)
            return B;
        if(B==NULL)
            return A;
        ListNode * head = NULL;
        if(A->val>B->val){
            head=B;
            B=B->next;
        }
        else{
            head=A;
            A=A->next;
        }
        ListNode * curr=head;
        while(A!=NULL || B!= NULL){
            if(A==NULL){
                curr->next=B;
                B=B->next;
                curr=curr->next;
                continue;
            }
            
            if(B==NULL){
                curr->next=A;
                A=A->next;
                curr=curr->next;
                continue;
            }
            if(A->val < B->val){
                curr->next=A;
                A=A->next;
                curr=curr->next;
                continue;
            }
            else{
                curr->next=B;
                B=B->next   ;
            curr=curr->next;
            continue;
            }
        }
        return head;
    }
};
