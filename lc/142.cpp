#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL) {}
};
ListNode *insert(ListNode *head, int x) {
    ListNode *np = new ListNode(x);
    if(head == NULL) {
        return np;
    }
    else {
        np->next = head;
        head = np;
        return head;
    }
}

ListNode *detectCycle(ListNode *head) {
    ListNode *slow = head, *fast = head;
    do {
        if(slow == NULL || fast == NULL)
            break;
        slow = slow->next;
        fast = fast->next;
        if(fast)
            fast = fast->next;
    } while(slow && fast && slow != fast);
    if(slow == NULL || fast == NULL)
        return NULL;
    else {
        int count = 0;
        ListNode *tmp = slow;
        do {
            count++;
            tmp = tmp->next;
        } while(tmp != slow);
        ListNode *i = head;
        while(count--) {
            i = i->next;
        }
        ListNode *j = head;
        while(i != j) {
            i = i->next;
            j = j->next;
        }
        return i;
    }
}

int main() {
    ListNode *head = NULL;
    head = insert(head, 5);
    head = insert(head, 1);
/*    head = insert(head, 2);
    head = insert(head, 6);
    head = insert(head, 7);
    head = insert(head, 4);
    head = insert(head, 3);
*/    //head->next->next->next->next->next->next->next = head->next->next->next->next;
    ListNode *tmp = detectCycle(head);
    if(tmp)
        cout << tmp->val << endl;
    else
        cout << "ads";
    return 0;
}
