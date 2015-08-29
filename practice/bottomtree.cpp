#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

struct Result {
    int val, level;
    bool flag;
    Result():flag(0) {}
    Result(int x, int y): val(x), level(y), flag(false) {}
};

TreeNode *insert(TreeNode *root, int v) {
    TreeNode *np = new TreeNode(v);
    if(root == NULL)
        return np;
    else if(root->val < v)
        root->right = insert(root->right, v);
    else
        root->left = insert(root->left, v);
    return root;
}

int x;
Result a[10000];

void inorder(TreeNode *root, int level, int index) {
    if(root) {
        inorder(root->left, level + 1, index - 1);
        if(a[index + x].flag) {
            if(a[index + x].level <= level) {
                a[index + x].level = level;
                a[index + x].val = root->val;
            }
        }
        else {
            a[index + x].level = level;
            a[index + x].flag = 1;
            a[index + x].val = root->val;
        }

        inorder(root->right, level + 1, index + 1);
    }
}

int getLeftMost(TreeNode *root) {
    int k = 0;
    while(root) {
        root = root->left;
        k++;
    }
    return k - 1;
}

int main() {
    TreeNode *root = NULL;
    root = insert(root, 9);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 10);
    root = insert(root, 17);
    root = insert(root, 1);
    root = insert(root, 4);
    root = insert(root, 6);
    root = insert(root, 8);
    x = getLeftMost(root);
    inorder(root, 0, 0);
    for(int i = 0 ; i < 1000 ; ++i) {
        if(a[i].flag == 0)
            break;
        else
            cout << a[i].val << " ";
    }
    return 0;
}
