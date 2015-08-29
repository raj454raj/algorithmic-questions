#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}
vector<string> res;

string tostring(int n) {
    ostringstream ss;
    ss << n;
    return ss.str();
}

void paths(TreeNode *root, string s) {
    if(root) {
        if(root->left == NULL && root->right == NULL) {
            s += tostring(root->val);
            res.push_back(s);
        }
        else {
            s += tostring(root->val) + "->";
            paths(root->left, s);
            paths(root->right, s);
        }
    }
}

vector<string> binaryTreePaths(TreeNode* root) {
    res.clear();
    if(root == NULL)
        return res;
    string s = "";
    paths(root, s);
    return res;
}

void inorder(TreeNode *root) {
    if(root) {
        inorder(root->left);
        cout << root->val << "->";
        inorder(root->right);
    }
}

int main() {
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->left->left = new TreeNode(8);
    root->left->left->right = new TreeNode(6);
    root->left->left->right->left = new TreeNode(9);
    root->left->right = new TreeNode(7);

    root->right = new TreeNode(5);
    root->right->right = new TreeNode(11);
    root->right->right->left = new TreeNode(15);
    root->right->right->left->right = new TreeNode(16);
    root->right->right->right = new TreeNode(18);
    vector<string> tmp = binaryTreePaths(root);
    for(int i = 0 ; i < tmp.size() ; ++i) {
        cout << tmp[i] << endl;
    }
    return 0;
}

