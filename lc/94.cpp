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

vector<int> inorder(TreeLinkNode *root) {
    vector<int> result;
    if(!root) return result;
    stack<TreeLinkNode *> S;
    TreeLinkNode *tmp, *curr = root;
    while(1) {
        if(curr == NULL && !S.empty()) {
            curr = S.top();
            S.pop();
            result.push_back(curr->val);
            curr = curr->right;
        }
        else if(curr == NULL)
            break;
        else {
            S.push(curr);
            curr = curr->left;
        }
    }
    return result;
}

int max(int a, int b) {
    if(a > b) 
        return a;
    return b;
}

int maxHeight(TreeLinkNode *root, int currHeight, int maxTillNow) {
    if(!root) {
        return maxTillNow;
    }
    else {
        if(currHeight > maxTillNow) {
            maxTillNow = currHeight;
        }
        return max(maxHeight(root->left, currHeight + 1, maxTillNow),
                   maxHeight(root->right, currHeight + 1, maxTillNow));
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
    vector<int> tmp = inorder(root);
    for(vector<int>::iterator it = tmp.begin() ; it != tmp.end() ; it++) {
        cout<< *it << " ";
    }
    cout << "MaxHeight of the tree: " << maxHeight(root, 0, 0) + 1;
    return 0;
}
