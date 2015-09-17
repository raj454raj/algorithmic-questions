#include<bits/stdc++.h>
#define ll long long int
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *tobst(ListNode *&head, int start, int end) {
    if(start > end) return NULL;
    int mid = end + (start - end) / 2;
    TreeNode *lft = tobst(head, start, mid - 1);
    TreeNode *np = new TreeNode(head->val);
    np->left = lft;
    head = head->next;
    np->right = tobst(head, mid + 1, end);
    return np;
}

TreeNode *sortedArrayToBST(ListNode *head) {
    int n = 0;
    ListNode *tmp = head;
    while(tmp) {
        n++;
        tmp = tmp->next;
    }
    return tobst(head, 0, n - 1);
}

void inorder(TreeNode *root) {
    if(root) {
        inorder(root->left);
        cout << root->val << "-->";
        inorder(root->right);
    }
}

int main() {
    int t, n, x;
    vector<int> v;
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(5);
    head->next->next->next = new ListNode(7);
    head->next->next->next->next = new ListNode(8);
    head->next->next->next->next->next = new ListNode(10);
    TreeNode *root = sortedArrayToBST(head);
    cout << endl;
    inorder(root);
    cout << endl;
    v.clear();
    return 0;
}

