#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL) {}
};
void partition(ListNode *head, ListNode **front, ListNode **back) {

    ListNode *fast;
    ListNode *slow;

    if (head == NULL || head->next == NULL){
        *front = head;
        *back = NULL;
    }
    else{
        slow = head;
        fast = head->next;
        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                slow = slow->next;
                fast = fast->next;
            }
        }
        *front = head;
        *back = slow->next;
        slow->next = NULL;
    }
}

ListNode* mergeLists(ListNode *a, ListNode *b) {

    ListNode *mergedList = NULL;

    if (a == NULL) {
        return b;
    } 
    else if (b == NULL) {
        return a;
    }

    if (a->val <= b->val) {
        mergedList = a;
        mergedList->next = mergeLists(a->next, b);
    }
    else {
        mergedList = b;
        mergedList->next = mergeLists(a, b->next);
    }

    return mergedList;

}

void mergeSort(ListNode **source){

    ListNode *head = *source;
    ListNode *a = NULL;
    ListNode *b = NULL;

    if(head == NULL || head->next == NULL) {
        return;
    }
    partition(head, &a, &b);
    mergeSort(&a);
    mergeSort(&b);
    *source = mergeLists(a, b);
}

ListNode* sortList(ListNode* head) {
    mergeSort(&head);
    return head;
}
int main() {
    ListNode *head = new ListNode(5);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(6);
    head->next->next->next->next = new ListNode(3);
    head = sortList(head);
    while(head) {
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}
