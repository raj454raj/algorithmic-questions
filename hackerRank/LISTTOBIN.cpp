#include<iostream>
using namespace std;
class Node {
    public:
        Node *next;
        int data;
};

Node* insertIntoList(Node *cur, int data) {
    if(cur == NULL) {
        cur = new Node();
        cur->data = data;
        cur->next = NULL;
    }
    else {
        cur->next = insertIntoList(cur->next, data);
    }
    return cur;
}
unsigned long long int pow(int a, int b) {
    if(b == 0)
        return 1;
    else if(b == 1)
        return a;
    else {
        unsigned long long int s = pow(a, b / 2);
        if(b&1)
            return s * s * a;
        else
            return s * s;
    }
}
unsigned long long int getNumber(Node *head) {
    unsigned long long int sum = 0, prevsum;
    Node *tmp = head;
    int count = 0;
    while(tmp) {
        count++;
        tmp = tmp->next;
    }
    int k = count - 1;
    while(head) {
        prevsum = sum;
        sum += pow(2, k) * head->data;
        if(sum < prevsum)
            return 0;
        head = head->next;
        --k;
    }
    return sum;
}

int main() {
    int N;
    cin >> N;
    Node *head = NULL;

    for(int i = 0; i < (int)N; ++i) {
        int curData;
        cin >> curData;
        head = insertIntoList(head, curData);
    }

    cout << getNumber(head) << endl;
    return 0;
}
