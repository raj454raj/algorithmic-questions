#include<stdio.h>
#include<stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *front = head, *rear = head, *prev = head;
    int i;
    for(i = 0 ; i < n - 1 ; i++)
        rear = rear->next;
    
    while(rear->next) {
        prev = front;
        front = front->next;
        rear = rear->next;
    }
    if(front == head)
        return head->next;
    prev->next = front->next;
    return head;

}

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
int main() {
    struct ListNode *head = NULL; // (struct ListNode *)malloc(sizeof(struct ListNode *));
    struct ListNode *tmp;
    int i = 0;
    for(i = 1; i <= 10 ; i++) {
        head = insert(head, i);
    }
    head = removeNthFromEnd(head, 9);
    while(head) {
        printf("%d -->", head->val);
        head = head->next;
    }

    return 0;
}
