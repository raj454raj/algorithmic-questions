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

struct ListNode *removeElements(struct ListNode *head, int val) {
    struct ListNode *tmp, *prev = NULL, *curr;
    while(head && head->val == val)
        head = head->next;
    tmp = head;
    prev = head;
    curr = head;
    while(tmp) {
        if(tmp->val == val) {
            curr = tmp;
            tmp = tmp->next;
            continue;
        }
        else {
            prev->next = curr->next;
            prev = tmp;
            tmp = tmp->next;
        }
    }
    return head;
}

int main() {
    int tmp[] = {1, 1, 1, 1, 5, 6, 7, 8, 9};
    int i;
    struct ListNode *head = NULL;
    int n;
    scanf("%d", &n);
    for(i = 8 ; i >= 0 ; i--) {
        head = insert(head, tmp[i]);
    }
    head = removeElements(head, n);
    while(head) {
        printf("%d -->", head->val);
        head = head->next;
    }
    return 0;
}
