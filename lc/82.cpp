#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL) {}
};

struct Node {
    int val, freq;
    Node *next;
    Node(int x, int y): val(x), freq(y), next(NULL) {}
};

Node *insert(Node *head, int x, int y) {

    Node *np = new Node(x, y);
    if(head == NULL) {
        return np;
    }
    else {
        np->next = head;
        head = np;
    }
    return head;
}

ListNode *ins(ListNode *head, int val) {
    ListNode *np = new ListNode(val);
    if(head == NULL)
        return np;
    else {
        np->next = head;
        head = np;
    }
    return head;
}

ListNode* deleteDuplicates(ListNode* head) {
    ListNode *p, *c;
    p = c = head;
    int count = 0;
    Node *tmpHead = NULL;
    while(c) {
        while(c&&p&&c->val == p->val) {
            p = c;
            c = c->next;
            count++;
        }
        tmpHead = insert(tmpHead, p->val, count);
        p = c;
        count = 0;
    }

    ListNode *newHead = NULL, *np;
    while(tmpHead) {
        if(tmpHead->freq == 1) {
            newHead = ins(newHead, tmpHead->val);
        }
        tmpHead = tmpHead->next;
    }
    return newHead;
}


int main() {
    ListNode *head = NULL;
    head = ins(head, 5);
    head = ins(head, 5);
    head = ins(head, 4);
    head = ins(head, 3);
    head = ins(head, 3);
    head = ins(head, 3);
    head = ins(head, 2);
    head = ins(head, 1);
    head = ins(head, 1);
    head = ins(head, 1);
    deleteDuplicates(head);
    return 0;
}
