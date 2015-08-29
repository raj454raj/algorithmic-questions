#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void print(vector<TreeNode *> t) {
    for(int i = 0 ; i < t.size() ; ++i) {
        cout << t[i]->val << " " ;
    }
    cout << endl;
}

stack<TreeNode *> S, P, Q;

void print(stack<TreeNode *> t) {
    while(!t.empty()) {
        cout << t.top()->val << " ";
        t.pop();
    }
    cout << endl;
}

void inorder(TreeNode *root, TreeNode *p, TreeNode *q) {
    if(!P.empty() && !Q.empty()) {
        return;
    }
    if(root) {
        S.push(root);
        inorder(root->left, p, q);
        if(root == p && P.empty()) {
            P = S;
        }
        else if(root == q && Q.empty()) {
            Q = S;
        }
        if(!P.empty() && !Q.empty()) {
            return;
        }
        inorder(root->right, p, q);
        S.pop();
    }
}

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    stack<TreeNode *> emp1, emp2, emp3;
    swap(S, emp1);
    swap(P, emp2);
    swap(Q, emp3);
    inorder(root, p, q);
    while(P.size() != Q.size() || P.top() != Q.top()) {
        if (P.size() > Q.size())
            P.pop();
        else if(P.size() < Q.size())
            Q.pop();
        else {
            P.pop();
            Q.pop();
        }
    }
    return P.top();
}

int main() {
    TreeNode *root = new TreeNode(-37);
    root->left = new TreeNode(-34);
    root->left->right = new TreeNode(-100);
    root->right = new TreeNode(-48);
    root->right->left = new TreeNode(-100);
    root->right->right = new TreeNode(48);
    root->right->right->left = new TreeNode(-54);
    root->right->right->left->left = new TreeNode(-71);
    root->right->right->left->right = new TreeNode(-22);
    root->right->right->left->right->right = new TreeNode(8);

    TreeNode *p, *q;
    //p = new TreeNode(-100);
    //q = new TreeNode(-100);
    p = root->right->right->left->left;
    q = root->right->left;
    TreeNode *t = lowestCommonAncestor(root, p, q); 
    cout << "***************************\n";
    cout << t->val << endl;
    return 0;
}
