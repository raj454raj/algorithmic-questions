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

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> res;
    stack<TreeNode *> S;

    if(!root) {
        return res;
    }

    TreeNode *curr = root;
    int tmp;
    while(1) {
        if(curr == NULL) {
            curr = S.top();
            curr = curr->right;
            S.pop();
        }
        else {
            S.push(curr);
            res.push_back(curr->val);
            curr = curr->left;
        }
        if(curr == NULL && S.empty())
            break;
    }
    return res;
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
    vector<int> tmp = preorderTraversal(root);
    for(vector<int>::iterator it = tmp.begin() ; it != tmp.end() ; it++) {
        cout<< *it << " ";
    }
    return 0;
}
