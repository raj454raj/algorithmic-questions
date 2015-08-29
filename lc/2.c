#include<stdio.h>
#include<stdlib.h>
struct ListNode {
    int a;
    struct ListNode *next;
};

struct ListNode *insert(struct ListNode *head, int val) {
    struct ListNode *np = (struct ListNode *)malloc(sizeof(struct ListNode *));
    np->a = val;
    np->next = NULL;
    if(head == NULL) {
        head = np;
        return head;
    }
    else {
        np->next = head;
        head = np;
        return head;
    }
}

struct ListNode *addLL(struct ListNode *h1, struct ListNode *h2) {
    struct ListNode *sum = (struct ListNode *)malloc(sizeof(struct ListNode *));
    int carry = 0;
    struct ListNode *prev = NULL;
    struct ListNode *final = sum;
    while(h1 && h2) {

        sum->a = (carry + h1->a + h2->a) % 10;
        carry = (carry + h1->a + h2->a) / 10;
        prev = sum;
        sum->next = (struct ListNode *)malloc(sizeof(struct ListNode *));
        sum = sum->next;
        h1 = h1->next;
        h2 = h2->next;
    }
    while(h1) {
        sum->a = (carry + h1->a) % 10;
        carry = (carry + h1->a) / 10;
        prev = sum;
        sum->next = (struct ListNode *)malloc(sizeof(struct ListNode *));
        sum = sum->next;
        h1 = h1->next;
    }
    while(h2) {
        sum->a = (carry + h2->a) % 10;
        carry = (carry + h2->a) / 10;
        prev = sum;
        sum->next = (struct ListNode *)malloc(sizeof(struct ListNode *));
        sum = sum->next;
        h2 = h2->next;
    }
    if(carry) {
        sum->a = carry;
        prev=sum;
    }
    prev->next = NULL;
    return final;
}

int main() {
    int i;
    char str[50], str2[50];
    scanf("%s", str);
    char temp;
    int l = strlen(str);
    struct ListNode *h1 = NULL, *h2 = NULL;
    for(i = 0 ; i < l / 2 ; i++) {
        temp = str[i];
        str[i] = str[l-i-1];
        str[l-i-1] = temp;
    }
    for(i = 0 ; str[i] ; i++) {
        h1 = insert(h1, str[i] - '0');
    }
    
    scanf("%s", str2);
    l = strlen(str2);
    for(i = 0 ; i < l / 2 ; i++) {
        temp = str2[i];
        str2[i] = str2[l-i-1];
        str2[l-i-1] = temp;
    }
    for(i = 0 ; str2[i] ; i++) {
        h2 = insert(h2, str2[i] - '0');
    }
/*    while(h1) {
        printf("%d ->", h1->a);
        h1 = h1->next;
    }
    printf("\n");
    while(h2) {
        printf("%d ->", h2->a);
        h2 = h2->next;
    }
  */
    struct ListNode *h = addLL(h1, h2);
    printf("\n");
    while(h) {
        printf("%d ->", h->a);
        h = h->next;
    }
    return 0;
}
