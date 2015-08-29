#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {};
};

TreeNode* invertTree(TreeNode* root) {
    if(root == NULL)
        return NULL;
    else {
        TreeNode *tmp1 = invertTree(root->right);
        TreeNode *tmp2 = invertTree(root->left);
        root->left = tmp1;
        root->right = tmp2;
        return root;
    }
}

void inorder(TreeNode *root) {
    if(root) {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}
int main() {
    TreeNode *root;
    root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right = new TreeNode(7);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);
    inorder(root);
    root = invertTree(root);
    inorder(root);
    return 0;
}
