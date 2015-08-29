#include<stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *insert(struct ListNode *head, int val) {
    struct ListNode *np = (struct ListNode *)malloc(sizeof(struct ListNode *));
    np->val = val;
    np->next = NULL;
    if(head == NULL)
        return np;
    else {
        np->next = head;
        head = np;
    }
    return head;
}
void swap(int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode *temp = head, *t = head;
    while (temp != NULL && temp->next != NULL) {
        swap(&temp->val, &temp->next->val);
        temp = temp->next->next;
    }
    return t;
}

int main() {
    int i, n;
    struct ListNode *head = NULL;
    for(i = 4 ; i >= 1 ; i--) {
        head = insert(head, i);
    }
    head = swapPairs(head);
    while(head) {
        printf("%d-->", head->val);
        head = head->next;
    }
    return 0;
}
