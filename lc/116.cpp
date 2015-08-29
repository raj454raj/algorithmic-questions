#include<bits/stdc++.h>
using namespace std;

struct TreeLinkNode {
    int val;
    TreeLinkNode *left, *right, *next;
    TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

TreeLinkNode *insert(TreeLinkNode *root, int a) {
    TreeLinkNode *np = new TreeLinkNode(a);

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

void inorder(TreeLinkNode *root) {
    if(root) {
        inorder(root->left);
        printf("%d-->", root->val);
        inorder(root->right);
    }
}

void levelorder(TreeLinkNode *root) {
    if(!root) return;
    queue< pair<TreeLinkNode *, int> > Q;
    pair<TreeLinkNode *, int> P;
    int level = 0;
    Q.push(make_pair(root, level));
    TreeLinkNode *tmp = NULL;
    while(!Q.empty()) {
        P = Q.front();
        Q.pop();
        tmp = P.first;
        level = P.second;
        cout << tmp->val << " ";
        if(!Q.empty()) {
            if(Q.front().second == level)
                tmp->next = Q.front().first;
            else
                tmp->next = NULL;
        }
        if(tmp->left)
            Q.push(make_pair(tmp->left, level + 1));
        if(tmp->right)
            Q.push(make_pair(tmp->right, level + 1));
    }
}

int main() {
    TreeLinkNode *root = NULL;
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
    inorder(root);
    cout<<endl;
    levelorder(root);
    return 0;
}
