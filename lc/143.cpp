#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x) {}
};
ListNode *getMiddle(ListNode *head) {
    if(head) {
        ListNode *prev = NULL, *slow = head, *fast = head;
        while(fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        return prev;
    }
    else
        return NULL;
}

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

void reorderList(ListNode *head) {
    if(head == NULL)
        return;
    ListNode *mid = getMiddle(head);
    if(mid == NULL)
        return;
    ListNode *secondhalf = reverse(mid->next);
    mid->next = NULL;
    ListNode *tmp1, *tmp2, *tmp = head, *prev;
    while(head) {
        tmp1 = head->next;
        head->next = secondhalf;
        tmp2 = secondhalf->next;
        secondhalf->next = tmp1;
        prev = secondhalf;
        head = tmp1;
        secondhalf = tmp2;
    }
    if(secondhalf) 
        prev->next = secondhalf;
    while(tmp) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

}

int main() {
    ListNode *head = new ListNode(1);
//    head->next = new ListNode(2);
//    head->next->next = new ListNode(3);
//    head->next->next->next = new ListNode(4);
    //head->next->next->next->next = new ListNode(5);
    //head->next->next->next->next->next = new ListNode(6);
    reorderList(head);
    return 0;
}
