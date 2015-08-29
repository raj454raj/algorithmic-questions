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

vector< vector<int> > res;

void paths(TreeNode *root, vector<int> tmp, int sum, int currsum) {
    if(root) {
        if(root->left == NULL && root->right == NULL) {
            tmp.push_back(root->val);
            currsum += root->val;
            if(currsum == sum)
                res.push_back(tmp);
        }
        else {
            currsum += root->val;
            tmp.push_back(root->val);
            paths(root->left, tmp, sum, currsum);
            paths(root->right, tmp, sum, currsum);
        }
    }
}

vector< vector< int > > binaryTreePaths(TreeNode* root, int sum) {
    res.clear();
    if(root == NULL)
        return res;
    vector<int> tmp;
    paths(root, tmp, sum, 0);
    return res;
}

void print(vector<int> r) {
    for(int i = 0 ; i < r.size() ; ++i) {
        cout << r[i] << "-->";
    }
    cout << endl;
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
    root->left->right = new TreeNode(11);

    root->right = new TreeNode(5);
    root->right->right = new TreeNode(11);
    root->right->right->left = new TreeNode(15);
    root->right->right->left->right = new TreeNode(16);
    root->right->right->right = new TreeNode(18);
    int n;
    cin >> n;
    vector< vector<int> > tmp = binaryTreePaths(root, n);
    for(int i = 0 ; i < tmp.size() ; ++i) {
        print(tmp[i]);
    }
    return 0;
}

