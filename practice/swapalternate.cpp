#include<bits/stdc++.h>
using namespace std;
struct node {
    int val;
    node *next;
    node(int x): val(x), next(NULL){};
};

void printList(node *head) {
    while(head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;

}

node* swapAlt(node *head) {
    if(head == NULL || head->next == NULL)
        return head;
    node *tmp, *next, *curr = head, *m, *prev = NULL;
    int count=0;
    head = head->next;
    while(curr && curr->next) {
        count++;
        next = curr->next;
        tmp = curr;
        curr->next = next->next;
        next->next = curr;
        if(count == 1) {
            m = next;       
        }
        if(prev)
            prev->next = next;
        prev = curr;
        curr = curr->next;
    }
    return m;
}
int main() {
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    head->next->next->next->next->next = new node(6);
    printList(head);
    head = swapAlt(head);
    printList(head);
    return 0;
}
