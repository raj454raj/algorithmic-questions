#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

void Inorder(TreeNode *root) {
    if(root) {
        Inorder(root->left);
        cout << root->val << "-->";
        Inorder(root->right);
    }
}
int main() {
    int n, x;
    vector<int> preorder, inorder;
    cin >> n;
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        preorder.push_back(x);
    }
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        inorder.push_back(x);
    }
    TreeNode *root = buildTree(preorder, inorder);
    Inorder(root);
    return 0;
}

