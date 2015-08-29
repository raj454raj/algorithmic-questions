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

bool inorder(TreeNode *root, long long int max, long long int min) {
    if(!root) return true;
    else {
        if(root->val >= max || root->val <= min)
            return false;
        return (inorder(root->left, root->val, min) && 
                inorder(root->right, max, root->val));
    }
}

bool isValidBST(TreeNode *root) {
    return inorder(root, LONG_MAX, LONG_MIN);
}

int main() {
    TreeNode *root = NULL;
    root = insert(root, 2147483647);
    root = insert(root, 2147483647);
    /*root = insert(root, 9);
    root = insert(root, 15);
    root = insert(root, 2);
    root = insert(root, 1);
    root = insert(root, 3);
    root = insert(root, 4);
    root = insert(root, 10);
    root = insert(root, 6);
    root = insert(root, 8);
    root = insert(root, 7);
    root = insert(root, 11);*/
    cout << isValidBST(root);
    return 0;
}
