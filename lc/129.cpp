#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int sumnum(TreeNode *root, int num, int sum) {
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL) {
        num = 10 * num + root->val;
        sum += num;
        return sum;
    }
    else {
        num = 10 * num + root->val;
        return sumnum(root->left, num, sum) + sumnum(root->right, num, sum);
    }
}

int sumNumbers(TreeNode* root) {
    return sumnum(root, 0, 0);
}

void inorder(TreeNode *root) {
    if(root) {
        inorder(root->left);
        cout << root->val << "--> ";
        inorder(root->right);
    }
}
int main() {

    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->left->right = new TreeNode(4);
    root->left->right = new TreeNode(1);
    root->left->right->left = new TreeNode(6);
    root->left->right->right = new TreeNode(5);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(8);
    root->right->left->left = new TreeNode(1);
    root->right->right = new TreeNode(7);
    root->right->right->left = new TreeNode(3);
    root->right->right->left->right = new TreeNode(8);
    cout << sumNumbers(root);
    return 0;
}
