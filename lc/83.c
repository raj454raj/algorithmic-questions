#include<stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode *head) {
    if(head == NULL) {
        return head;
    }
    struct ListNode *tmp = head->next, *prev = head;
    int current = head->val;

    while(tmp) {
        if(tmp->val == current) {
            prev->next = tmp->next;
        }
        else {
            current = tmp->val;
            prev = tmp;
        }
        tmp = tmp->next;
    }
    
    return head;
}

int main() {
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode *));
    head->val = 1;
    head->next = (struct ListNode *)malloc(sizeof(struct ListNode *));
    head->next->val = 1;
    head->next->next = (struct ListNode *)malloc(sizeof(struct ListNode *));
    head->next->next->val = 1;
    head->next->next->next = (struct ListNode *)malloc(sizeof(struct ListNode *));
    head->next->next->next->val = 2;
    head->next->next->next->next = (struct ListNode *)malloc(sizeof(struct ListNode *));
    head->next->next->next->next->val = 3;
    head->next->next->next->next->next = (struct ListNode *)malloc(sizeof(struct ListNode *));
    head->next->next->next->next->next->val = 3;
    head = deleteDuplicates(head);
    while(head) {
        printf("%d", head->val);
        head = head->next;
    }
    return 0;
}
