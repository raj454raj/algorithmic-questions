#include<stdio.h>
#include<stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* insert(struct ListNode *head, int val) {
    struct ListNode *np = (struct ListNode *)malloc(sizeof(struct ListNode *));
    np->val = val;
    np->next = NULL;

    if(head == NULL)
        head = np;
    else {
        np->next = head;
        head = np;
    }
    return head;
}

struct ListNode* reverse(struct ListNode* head) {
    struct ListNode* curr, prev, next;
    curr = head;
    prev = NULL;
    while(curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;

}

int main() {
    struct ListNode *head = NULL; // (struct ListNode *)malloc(sizeof(struct ListNode *));
    struct ListNode *tmp;
    int i = 0;
    for(i = 1; i <= 10 ; i++) {
        head = insert(head, i);
    }
    head = reverse(head);
    while(head) {
        printf("%d -->", head->val);
        head = head->next;
    }

    return 0;
}
