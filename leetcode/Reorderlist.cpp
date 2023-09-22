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
    void reorderList(ListNode* head) {
        //finding mid point
        ListNode * curr=head;
        ListNode * mid=NULL;
        while(curr!=NULL){
          if(mid==NULL)
            mid=head;
          else
            mid=mid->next;
          if(curr->next==NULL){
            curr=curr->next;
          }
          else{
            curr=curr->next->next;
          }
        }
        //lets reveeeeerse
        ListNode * prev=NULL;
        curr= mid->next;
        while(curr!=NULL){
          ListNode * temp= curr->next;
          curr->next=prev;
          prev=curr;
          curr=temp;
        } 
        curr=prev;
        mid->next=NULL;
        //lets insertttt!
        ListNode * start=head;
        ListNode * present=curr;
        while(present){
          ListNode * temp=start->next;
          ListNode * temp2=present->next;
          start->next=present;
          start->next->next=temp;
          present=temp2;
          start=temp;
        }

    }
};
