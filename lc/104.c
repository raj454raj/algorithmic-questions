#include<stdio.h>
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
int dep = 1;

void inorder(struct TreeNode *root, int depth) {
    if(root) {
        if(depth > dep)
            dep = depth;
        inorder(root->left, depth + 1);
        printf("%d --> ", root->val);
        inorder(root->right, depth + 1);
    }
}

int maxDepth(struct TreeNode* root) {
    if(root == NULL)
        return 0;
    inorder(root, 1);
    return dep;
}

int main() {
    struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode *));
    root->val = 5;
    root->left = (struct TreeNode *)malloc(sizeof(struct TreeNode *));
    root->left->val = 6;
    root->left->left = (struct TreeNode *)malloc(sizeof(struct TreeNode *));
    root->left->left->val = 7;
    root->right = (struct TreeNode *)malloc(sizeof(struct TreeNode *));
    root->right->val = 7;
    root->right->right = (struct TreeNode *)malloc(sizeof(struct TreeNode *));
    root->right->right->val = 7;
    root->right->right->right = (struct TreeNode *)malloc(sizeof(struct TreeNode *));
    root->right->right->right->val = 7;
    printf("%d \n", maxDepth(root));
    return 0;
}
