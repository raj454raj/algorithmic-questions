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

vector<int> postorderTraversal(TreeNode* root) {
    stack< pair< TreeNode*, pair<TreeNode*, TreeNode*> > > S;
    vector<int> res;
    if(root == NULL)
        return res;    
    S.push(make_pair(root, make_pair(root->left, root->right)));
    
    pair< TreeNode*, pair<TreeNode*, TreeNode*> > curr, tmp;
    TreeNode *left, *right;

    while(!S.empty()) {
        curr = S.top();
        left = curr.second.first;
        right = curr.second.second;

        if(left)
            S.push(make_pair(left, make_pair(left->left, left->right)));
        else if(right)
            S.push(make_pair(right, make_pair(right->left, right->right)));
        else {
            tmp = S.top();
            res.push_back(tmp.first->val);
            S.pop();
            if(!S.empty()) {
                if(tmp.first == S.top().second.first)
                    S.top().second.first = NULL;
                else
                    S.top().second.second = NULL;
            }
        }
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
    vector<int> tmp = postorderTraversal(root);
    for(vector<int>::iterator it = tmp.begin() ; it != tmp.end() ; it++) {
        cout<< *it << " ";
    }
    return 0;
}
