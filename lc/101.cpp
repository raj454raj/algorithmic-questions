#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right, *next;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void inorder(TreeNode *root) {
    if(root) {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}

bool isSame(TreeNode *root1, TreeNode *root2) {
    if(root1 == NULL || root2 == NULL) {
        return root1 == NULL && root2 == NULL;
    }
    else {
        return (root1->val == root2->val && isSame(root1->left, root2->right) && isSame(root1->right, root2->left));
    }
}

bool isSymmetric(TreeNode *root) {
    if(root == NULL)
        return true;
    return isSame(root->left, root->right);
}

int main() {
    TreeNode *root = NULL;
    root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(4);
    root->left->left = new TreeNode(2);
    root->right->right = new TreeNode(2);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(3);
    cout << isSymmetric(root); 
    return 0;
}
