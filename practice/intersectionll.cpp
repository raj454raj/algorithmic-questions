#include<bits/stdc++.h>
using namespace std;
struct node {
    int val;
    node *next;
    node(int x): val(x), next(NULL) {};
};


void printList(node *a) {
    while(a) {
        cout << a->val << " -->";
        a = a->next;
    }
    cout << endl;
}
node *intersection(node *a, node *b) {
    node *c = new node(0);
    node *tmp = c, *prev = NULL;
    while(1) {
        if(a == NULL || b == NULL) {
            break;
        }
        if(a->val < b->val) {
            a = a->next;
        }
        else if(b->val < a->val) {
            b = b->next;
        }
        else {
            c->val = a->val;
            c->next = new node(0);
            prev = c;
            c = c->next;
            a = a->next;
            b = b->next;
        }
    }
    prev->next = NULL;
    return tmp;
}
int main() {
    int n;
    node *a;
    node *b;
    a = new node(1);
    a->next = new node(2);
    a->next->next = new node(3);
    a->next->next->next = new node(4);
    b = new node(1);
    b->next = new node(3);
    b->next->next = new node(4);
    b->next->next->next = new node(8);
    printList(intersection(a, b));
    return 0;
}
