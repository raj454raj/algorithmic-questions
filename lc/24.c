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
struct ListNode* swapPairs1(struct ListNode* head) {
    struct ListNode *temp = head, *t = head;
    while (temp != NULL && temp->next != NULL) {
        swap(&temp->val, &temp->next->val);
        temp = temp->next->next;
    }
    return t;
}

struct ListNode* swapPairs2(struct ListNode* head) {
    if(head == NULL || head->next == NULL)
        return head;
    int flag = 0;
    struct ListNode *curr = head->next, *prev=head, *start=NULL, *t;
    while(curr) {
        t = curr->next;
        curr->next=prev;
        prev->next = t;
        if(start)
            start->next = curr;
        else
            head = curr;
        start = prev;
        prev = t;
        if(t)
            curr = t->next;
        else
            break;
    }
    return head;
}

int main() {
    int i, n;
    struct ListNode *head = NULL, *tmphead = NULL, *head1, *head2;
    for(i = 15 ; i >= 1 ; i--) {
        head = insert(head, i);
        tmphead = insert(tmphead, i);
    }
    head1 = swapPairs1(head);
    printf("First function: \n");
    while(head1) {
        printf("%d-->", head1->val);
        head1 = head1->next;
    }
    printf("\n");
    printf("Second function: \n");
    head2 = swapPairs2(tmphead);
    while(head2) {
        printf("%d-->", head2->val);
        head2 = head2->next;
    }
    printf("\n");
    return 0;
}
