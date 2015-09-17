#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
using namespace std;
int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *sortedArrayToBST(vector<int>& nums) {
    if(nums.size() == 0)
        return NULL;
    int mid = nums.size() / 2;
    int element = *(nums.begin() + mid);
    TreeNode *np = new TreeNode(element);
    vector<int> lft(nums.begin(), nums.begin() + mid);
    vector<int> rht(nums.begin() + mid + 1, nums.end());
    np->left = sortedArrayToBST(lft);
    np->right = sortedArrayToBST(rht);
    return np;
}

void inorder(TreeNode *root) {
    if(root) {
        inorder(root->left);
        cout << root->val << "-->";
        inorder(root->right);
    }
}
int main() {
    int t, n, x;
    vector<int> v;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(int i = 0 ; i < n ; ++i) {
            scanf("%d", &x);
            v.push_back(x);
        }
        TreeNode *root = sortedArrayToBST(v);
        inorder(root);
        cout << endl;
        v.clear();
    }
    return 0;
}

