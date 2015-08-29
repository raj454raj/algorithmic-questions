#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *next;
};
Node* InsertNth(Node *head, int data, int position)
{
    Node *np = (Node *)malloc(sizeof(Node *));
    np->data = data;
    np->next = NULL;
    if(head == NULL && position == 0)
        return np;
    else {
        Node *tmp = head, *prev = NULL;
        if(position == 0) {
            np->next = head;
            head = np;
            return head;
        }
        for(int i = 0 ; i < position && tmp; i++) {
            prev = tmp;
            tmp = tmp->next;
        }
        Node *t = prev->next;
        prev->next = np;
        np->next = t;
    }
    return head;
}

void printList(Node *head) {
    while(head) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node *head = NULL;
    head = InsertNth(head, 5, 0);
    head = InsertNth(head, 3, 1);
    head = InsertNth(head, 2, 2);
    head = InsertNth(head, 1, 4);
    head = InsertNth(head, 6, 1);
    printList(head);
    return 0;
}
