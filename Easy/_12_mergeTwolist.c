/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (list1 == NULL && list2 == NULL) {
    return NULL;
}
    struct ListNode* a=list1;
    struct ListNode* b=list2;
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* ptr = head;
    while(a!=NULL && b!=NULL){
        if(a->val>=b->val){
            ptr->val=b->val;
            b=b->next;
        }
        else if(a->val<b->val){
            ptr->val=a->val;
            a=a->next;
        }
        ptr->next=(struct ListNode*)malloc(sizeof(struct ListNode));
        ptr=ptr->next;
    }
    struct ListNode* ptrr = (a != NULL) ? a : b;
    while(ptrr!=NULL){
        ptr->val=ptrr->val;
        ptrr=ptrr->next;
        if (ptrr != NULL){
        ptr->next=(struct ListNode*)malloc(sizeof(struct ListNode));
        ptr=ptr->next;}
    }
    ptr->next=NULL;
    return head;
}