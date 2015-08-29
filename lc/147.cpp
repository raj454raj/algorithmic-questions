#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* insertionSortList(ListNode *head) {
    if(head == NULL || head->next == NULL)
        return head;
    ListNode *curr=head->next, *tail, *tmpcurr, *verytmp, *prev;
    tail = head;
    while(curr) {
        verytmp = curr->next;
        tmpcurr = head; prev = NULL;
        tail->next = verytmp;
        if(tmpcurr->val >= curr->val) {
            curr->next = head;
            head = curr;
            curr = verytmp;
            continue;
        }
        while(tmpcurr != tail->next) {
            if(tmpcurr->val < curr->val) {
                prev = tmpcurr;
                tmpcurr = tmpcurr->next;
            }
            else
                break;
        }
        if(tmpcurr == tail->next) {
            curr->next = tmpcurr;
            prev->next = curr;
            tail = curr;
        }
        else {
            if(prev) {
                curr->next = prev->next;
                prev->next = curr;
            }
            else {
                curr->next = tmpcurr->next;
                tmpcurr->next = curr;
            }
        }
        tail->next = verytmp;
        curr = verytmp;
    }
    return head;
}

void traverse(ListNode *head) {
    while(head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    ListNode *head = new ListNode(2);
    head->next = new ListNode(2);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(16);
    head->next->next->next->next->next = new ListNode(7);
    head = insertionSortList(head);
    traverse(head);
    return 0;
}
