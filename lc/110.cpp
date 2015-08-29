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

int height(struct TreeNode *root) {

}

bool is_balanced(struct TreeNode *root, int level) {
    int f = 0;
    if(fabs(height(root->left, level + 1) - height(root->right, level + 1)) <= 1)
        f = 1;
    return (f && is_balanced(root->left, level + 1) && is_balanced(root->right, level + 1));
}

bool isBalanced(struct TreeNode *root) {
    return is_balanced(root, 0);
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
    return 0;
}
