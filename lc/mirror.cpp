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

void preorder(TreeLinkNode *root) {
    if(root) {
        cout << root->val << " --> ";
        preorder(root->left);
        preorder(root->right);
    }
}

TreeLinkNode *mirror(TreeLinkNode *root) {
    if(root) {
        TreeLinkNode *tmp1 = mirror(root->left);
        TreeLinkNode *tmp2 = mirror(root->right);
        root->left = tmp2;
        root->right = tmp1;
    }
    return root;
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
    preorder(root);
    cout << endl;
    root = mirror(root);
    preorder(root);
    return 0;
}
