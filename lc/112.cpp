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

bool hasPathSum(TreeLinkNode *root, int sum) {
    if(root == NULL)
        return false;
    else {
        sum -= root->val;
        if(sum == 0) {
            if(root->left == NULL && root->right == NULL)
                return true;
        }
        return (hasPathSum(root->left, sum) || hasPathSum(root->right, sum));
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
/* 
    root = new TreeLinkNode(8);
    root->left = new TreeLinkNode(9);
    root->right = new TreeLinkNode(-6);
    root->right->left = new TreeLinkNode(5);
    root->right->right = new TreeLinkNode(9);
  */  cout << hasPathSum(root, 81);
    return 0;
}
