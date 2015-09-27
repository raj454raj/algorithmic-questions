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

int find(vector<int>& v, int x) {
    for(int i = 0 ; i < v.size() ; ++i) {
        if(v[i] == x)
            return i;
    }
    return -1;
}

int tindex = 0;
TreeNode *bt(vector<int>& preorder, vector<int>& inorder) {
    if(preorder.size() == 0 || inorder.size() == 0)
        return NULL;
    TreeNode *root = new TreeNode(preorder[tindex]);
    int ind = find(inorder, preorder[tindex]);
    if(ind >= 0) {
        tindex++;
        vector<int> il(inorder.begin(), inorder.begin() + ind);
        vector<int> ir(inorder.begin() + ind + 1, inorder.end());
        root->left = bt(preorder, il);
        root->right = bt(preorder, ir);
    }
    return root;
}

TreeNode *buildTree(vector<int>& preorder, vector<int>& inorder) {
    tindex = 0;
    return bt(preorder, inorder);
}

void Inorder(TreeNode *root) {
    if(root) {
        Inorder(root->left);
        cout << root->val << "-->";
        Inorder(root->right);
    }
}
int main() {
    int n, m, x;
    vector<int> preorder, inorder;
    cin >> n >> m;
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        preorder.push_back(x);
    }
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        inorder.push_back(x);
    }

    TreeNode *root1 = buildTree(preorder, inorder);
    Inorder(root1);
    cout << endl;
    preorder.clear();
    inorder.clear();
    for(int i = 0 ; i < m ; ++i) {
        cin >> x;
        preorder.push_back(x);
    }
    for(int i = 0 ; i < m ; ++i) {
        cin >> x;
        inorder.push_back(x);
    }
    TreeNode *root2 = buildTree(preorder, inorder);
    Inorder(root2);
    return 0;
}

