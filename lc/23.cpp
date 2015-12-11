#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
struct cmp {
    bool operator()(pair<int, int> a, pair<int, int> b) {
        return a.first > b.first;
    }
};

ListNode* mergeKLists(vector<ListNode*>& lists) {
    ListNode *head = NULL;
    if(lists.size() == 0)
        return head;
    priority_queue<pair<int, int> , vector<pair<int, int> >, cmp > q;
    for(int i = 0 ; i < lists.size() ; ++i) {
        if(lists[i]) {
            q.push(make_pair(lists[i]->val, i));
        }
    }
    pair<int, int> p;
    ListNode *curr = NULL, *tail = NULL;
    while(!q.empty()) {
        p = q.top();
        if(head == NULL) {
            curr = new ListNode(p.first);
            head = curr;
            tail = curr;
            q.pop();
            lists[p.second] = lists[p.second]->next;
            if(lists[p.second])
                q.push(make_pair(lists[p.second]->val, p.second));
        }
        else {
            tail->next = new ListNode(p.first);
            tail = tail->next;
            q.pop();
            lists[p.second] = lists[p.second]->next;
            if(lists[p.second])
                q.push(make_pair(lists[p.second]->val, p.second));
        }
    }
    return head;

}
int main() {
    ios_base::sync_with_stdio(0);
    vector<ListNode*> lists;
    ListNode *head1 = new ListNode(2);
    head1->next = new ListNode(4);
    head1->next->next = new ListNode(6);
    lists.push_back(head1);
    ListNode *head2 = new ListNode(1);
    head2->next = new ListNode(3);
    head2->next->next = new ListNode(7);
    lists.push_back(head2);
    ListNode *head = mergeKLists(lists);
    while(head) {
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}

