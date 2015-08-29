#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *insert(ListNode *head, int val) {
    ListNode *np = new ListNode(val);
    if(head == NULL)
        return np;
    else {
        np->next = head;
        head = np;
    }
    return head;
}

ListNode *rotateList(ListNode *head, int k) {
    ListNode *tmp = head, *tail;
    int n = 0;

    while(tmp) {
        n++;
        tail = tmp;
        tmp = tmp->next;
    }
    if(n == 0 || n == 1)
        return head;
    k = k%n;
    if(k != 0)
        k = n - k;
    tail->next = head;
    while(k--) {
        head = head->next;
        tail = tail->next;
    }
    tail->next = NULL;
  
    return head;
}

int main() {

    ListNode *head = NULL;
    head = insert(head, 6);
    head = insert(head, 5);
    head = insert(head, 4);
    head = insert(head, 3);
    head = insert(head, 2);
    head = insert(head, 1);
    head = rotateList(head, 100);
    while(head) {
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}
