#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *reverse(ListNode *head) {
    ListNode *tmp, *curr, *prev;
    curr = head;
    prev = NULL;
    while(curr) {
        tmp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = tmp;
    }
    head = prev;
    return head;
}

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

ListNode* reverseKGroup(ListNode* head, int k) {
    if(head == NULL || head->next == NULL)
        return head;
    ListNode *mainhead, *mainend, *end, *start, *t, *next, *prev;
    start = end = head;
    mainhead = mainend = NULL;
    int flag;
    while(1) {
        flag = 0;
        end = start;
        if(start == NULL)
            break;
        for(int i = 0 ; i < k ; ++i) {
            if(end) {
                prev = end;
                end = end->next;
            }
            else {
                flag = 1;
                break;
            }
        }
        if(flag) {
            end = start;
            while(end) {
                if(mainend != NULL) {
                    mainend->next = end;
                    mainend = end;
                }
                else {
                    mainhead = end;
                    mainend = end;
                }
                end = end->next;
            }
            break;
        }
        next = end;
        prev->next = NULL;
        t = reverse(start);
        if(mainhead) {
            mainend->next = t;
            mainend = start;
            mainend->next = NULL;
        }
        else {
            mainhead = t;
            mainend = start;
            mainend->next = NULL;
        }
        start = next;
    }
    return mainhead;
}
int main() {

    ListNode *head = NULL;
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 5);
    head = insert(head, 6);
    head = insert(head, 7);
    ListNode *tm = head;
    /*while(tm) {
        cout << tm->val << " -> ";
        tm = tm->next;
    }*/
    tm = reverseKGroup(head, 9);
    while(tm) {
        cout << tm->val << " -> ";
        tm = tm->next;
    }
    return 0;
}
