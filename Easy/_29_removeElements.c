/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    if(head==NULL){
        return head;
    }
    struct ListNode *ptr1=head;
    struct ListNode *ptr2=head;
    ptr1=ptr1->next;
    while(ptr1!=NULL){
        if(ptr1->val==val){
           ptr2->next=ptr1->next;
           ptr1=ptr1->next;
        }
        else{
           ptr1=ptr1->next;
           ptr2=ptr2->next;
        }
    }
    if(head->val==val){
        head=head->next;
    }
    return head;
}