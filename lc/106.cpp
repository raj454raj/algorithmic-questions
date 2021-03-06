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
TreeNode *bt(vector<int>& postorder, vector<int>& inorder) {
    if(postorder.size() == 0 || inorder.size() == 0 || tindex < 0)
        return NULL;
    TreeNode *root = new TreeNode(postorder[tindex]);
    int ind = find(inorder, postorder[tindex]);
    if(ind >= 0) {
        tindex--;
        vector<int> il(inorder.begin(), inorder.begin() + ind);
        vector<int> ir(inorder.begin() + ind + 1, inorder.end());
        root->right = bt(postorder, ir);
        root->left = bt(postorder, il);
    }
    return root;
}

TreeNode *buildTree(vector<int>& postorder, vector<int>& inorder) {
    tindex = postorder.size() - 1;
    return bt(postorder, inorder);
}

void Inorder(TreeNode *root) {
    if(root) {
        Inorder(root->left);
        cout << root->val << "-->";
        Inorder(root->right);
    }
}
int main() {
    int n, x;
    vector<int> postorder, inorder;
    cin >> n;
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        postorder.push_back(x);
    }
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        inorder.push_back(x);
    }
    TreeNode *root = buildTree(postorder, inorder);
    Inorder(root);
    return 0;
}

