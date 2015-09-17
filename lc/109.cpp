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

TreeNode *sortedArrayToBST(ListNode *head) {
    if(head == NULL)
        return NULL;
    if(head->next == NULL) {
        TreeNode *np = new TreeNode(head->val);
        return np;
    }
    if(head->next->next == NULL) {
        TreeNode *np = new TreeNode(head->next->val);
        np->left = new TreeNode(head->val);
        return np;
    }
    ListNode *slow, *fast, *prev = NULL;
    slow = head;
    fast = head;
    while(slow && fast) {
        prev = slow;
        slow = slow->next;
        fast = fast->next;
        if(fast)
            fast = fast->next;
    }
    cout << prev->val << " ";
    TreeNode *np = new TreeNode(prev->val);
    ListNode *rht = slow;
    prev->next = NULL;
    ListNode *lft = head;
    np->left = sortedArrayToBST(lft);
    np->right = sortedArrayToBST(rht);
    return np;
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

