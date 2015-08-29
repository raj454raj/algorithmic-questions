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

int getLeftHeight(TreeLinkNode *root){
    if(root == NULL) 
        return 0;

    int height = 0;
    while(root->left != NULL) {
        height++;
        root = root->left;
    }
    return height;
}
int getRightHeight(TreeLinkNode *root){
    if(root == NULL) 
        return 0;

    int height = 0;
    while(root->right != NULL) {
        height++;
        root = root->right;
    }
    return height;
}
int countNodes(TreeLinkNode *root) {
    if(root == NULL)
        return 0;

    int left = getLeftHeight(root) + 1;    
    int right = getRightHeight(root) + 1;

    if(left == right) {
        return (2 << (left - 1)) - 1;
    }
    else {
        return countNodes(root->left)+countNodes(root->right)+1;
    }
}

int main() {
    TreeLinkNode *root = NULL;
    root = insert(root, 10);
    root = insert(root, 6);
    root = insert(root, 14);
    root = insert(root, 4);
    root = insert(root, 8);
    root = insert(root, 12);
    root = insert(root, 16);
    root = insert(root, 2);
    root = insert(root, 5);
    root = insert(root, 7);
    root = insert(root, 9);
    root = insert(root, 11);
    root = insert(root, 13);
    root = insert(root, 15);
    root = insert(root, 17);
    root = insert(root, 1);
    root = insert(root, 3);
    cout << countNodes(root);
    return 0;
}
