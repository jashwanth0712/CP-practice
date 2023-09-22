/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode * p1=A;
    ListNode * p2=A;
    while(p1!=NULL){
        if(p1->val==0){
            swap(p1->val,p2->val);
            p2=p2->next;
        }
        p1=p1->next;
    }
    return A;
}
