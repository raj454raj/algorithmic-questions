#include<stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode *last1, *last2, *head1, *head2;
struct ListNode *insert(struct ListNode *head, int val, int index) {
    struct ListNode *last = NULL, *np = (struct ListNode *)malloc(sizeof(struct ListNode *));
    np->val = val;
    np->next = NULL;
    if(index == 1) {
        if(head == last1 && last1 == NULL) {
            head = last1 = np;
            return np;
        }
        else {
            last1->next = np;
            last1 = np;
        }
    }
    else {
        if(head == last2 && last2 == NULL) {
            head = last2 = np;
            return np;
        }
        else {
            last2->next = np;
            last2 = np;
        }
    }
    return head;
}
struct ListNode* partition(struct ListNode* head, int x) {
    last1 = last2 = head1 = head2 = NULL;
    struct ListNode *tmp = head;
    while(tmp) {
        if(tmp->val < x) {
            head1 = insert(head1, tmp->val, 1);
        }
        else
            head2 = insert(head2, tmp->val, 2);

        tmp = tmp->next;
    }
    if(last1)
        last1->next = head2;
    else
        return head2;
    return head1;
}
int main() {
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode *));
    head->val = 1;
    head->next = (struct ListNode *)malloc(sizeof(struct ListNode *));
    head->next->val = 1;
    head->next->next = (struct ListNode *)malloc(sizeof(struct ListNode *));
    head->next->next->val = 1;
    head->next->next->next = (struct ListNode *)malloc(sizeof(struct ListNode *));
    head->next->next->next->val = 1;
    head->next->next->next->next = NULL;
    struct ListNode *t = partition(head, 1);
    while(t) {
        printf("%d -->", t->val);
        t = t->next;
    }


    return 0;
}
