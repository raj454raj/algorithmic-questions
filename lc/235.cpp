#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<TreeNode *> findPath(TreeNode *root, TreeNode *x) {
    TreeNode *tmp = root;
    vector<TreeNode *> res;
    while(tmp && tmp->val != x->val) {
        res.push_back(tmp);
        if(tmp->val < x->val) {
            tmp = tmp->right;
        }
        else if(tmp->val > x->val) {
            tmp = tmp->left;
        }
    }
    res.push_back(tmp);
    return res;
}

void print(vector<TreeNode *> t) {
    for(int i = 0 ; i < t.size() ; ++i) {
        cout << t[i]->val << " " ;
    }
    cout << endl;
}

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

    vector<TreeNode *> a, b;
    a = findPath(root, p);
    b = findPath(root, q);
    TreeNode *prev = NULL;
    int i;
    for(i = 0 ; i < a.size() && i < b.size() ; ++i) {
        if(a[i]->val != b[i]->val)
            break;
    }
    return a[i - 1];
}
int main() {
    TreeNode *root = new TreeNode(6);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    root->left->right->left = new TreeNode(3);
    root->left->right->right = new TreeNode(5);
    root->right = new TreeNode(8);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);

    TreeNode *p, *q;
    p = new TreeNode(8);
    q = new TreeNode(7);
    TreeNode *t = lowestCommonAncestor(root, p, q); 
    cout << t->val << endl;
    return 0;
}
