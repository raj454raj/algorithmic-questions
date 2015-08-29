#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right, *next;
    TreeNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

TreeNode *insert(TreeNode *root, int a) {
    TreeNode *np = new TreeNode(a);

    if(root == NULL)
        return np;
    else if(root->val < a) {
        root->right = insert(root->right, a);
    }
    else {
        root->left = insert(root->left, a);
    }
    return root;
}

vector<int> rightSideView(TreeNode* root) {
    vector<int> result;
    int level[10000];
    if(!root)
        return result;
    queue< pair<TreeNode *, int> > Q;
    Q.push(make_pair(root, 1));
    int tmplevel;
    level[0] = root->val;
    TreeNode *tmp = NULL;
    pair<TreeNode *, int> p;
    while(!Q.empty()) {
        p = Q.front();
        Q.pop();
        tmplevel = p.second;
        if(p.first->right) {
            level[tmplevel] = p.first->right->val;
        }
        else if(p.first->left) {
            level[tmplevel] = p.first->left->val;
        }
        if(p.first->left) {
            Q.push(make_pair(p.first->left, tmplevel + 1));
        }
        if(p.first->right) {
            Q.push(make_pair(p.first->right, tmplevel + 1));
        }
    }
    for(int i = 0 ; i < tmplevel ; i++) {
        result.push_back(level[i]);
    }
    return result;
}

int main() {
    TreeNode *root = NULL;
    root = insert(root, 5);
    root = insert(root, 9);
    root = insert(root, 15);
    root = insert(root, 2);
    root = insert(root, 1);
    root = insert(root, 3);
    root = insert(root, 4);
    root = insert(root, 10);
    root = insert(root, 6);
    root = insert(root, 8);
    root = insert(root, 7);
    root = insert(root, 11);
    vector<int> tmp = rightSideView(root);
    for(vector<int>::iterator it = tmp.begin() ; it != tmp.end() ; it++) {
        cout << *it << " ";
    }
    return 0;
}
