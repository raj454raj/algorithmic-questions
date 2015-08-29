#include<stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *insert(struct ListNode *head, int val) {

    struct ListNode *np = (struct ListNode *)malloc(sizeof(struct ListNode *));
    np->val = val;
    np->next = NULL;
    if(head == NULL) {
        head = np;
    }
    else {
        np->next = head;
        head = np;
    }
    return head;
}

struct ListNode *tail = NULL;
struct ListNode *newInsert(struct ListNode *head, int val) {
    struct ListNode *np = (struct ListNode *)malloc(sizeof(struct ListNode *));
    np->val = val;
    np->next = NULL;
    if(head == tail && head == NULL) {
        head = tail = np;
        return head;
    }
    else {
        tail->next = np;
        tail = np;
    }
    return head;
}

struct ListNode *removeElements(struct ListNode *head, int val) {
    struct ListNode *curr = head;
    struct ListNode *prev = NULL;
    struct ListNode *newHead = NULL;
    while(curr) {
        if(curr->val != val)
            newHead = newInsert(newHead, curr->val);
        curr = curr->next;
    }
    return newHead;
}

int main() {

    char tmp[] = {1, 1, 1, 1, 1, 1, 1};
    int n;
    scanf("%d", &n);
    int i;
    struct ListNode *head=NULL;
    for(i = 0 ; i < 7 ; i++) {
        head = insert(head, tmp[i]);
    }
    head = removeElements(head, n);
    while(head) {
        printf("%d-->", head->val);
        head = head->next;
    }
    return 0;
}
