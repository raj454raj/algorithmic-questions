#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
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

bool isPalindrome(ListNode *head) {
    ListNode *mid = getMiddle(head);
    ListNode *tmp = head;
    if(mid == NULL)
        return true;
    bool flag = true;
    ListNode *secondhalf = reverse(mid->next);
    mid->next = NULL;
    while(head) {
        if(head->val != secondhalf->val) {
            flag = false;
            break;
        }
        head = head->next;
        secondhalf = secondhalf->next;
    }
    return flag;
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
int main() {

    ListNode *head = NULL;
    head = insert(head, 5);
    head = insert(head, 1);
    head = insert(head, 3);
    head = insert(head, 5);
    head = insert(head, 1);
    head = insert(head, 5);
    cout << isPalindrome(head);
    return 0;
}
