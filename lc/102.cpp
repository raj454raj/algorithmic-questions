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

vector< vector<int> > levelorder(TreeLinkNode *root) {
    vector< vector<int> > res;
    vector<int> t;
    if(root == NULL) 
        return res;
    queue< pair<TreeLinkNode *, int> > Q;
    pair<TreeLinkNode *, int> P;
    int level = 0, currlevel = 1;
    TreeLinkNode *tmp;
    Q.push(make_pair(root, level));
    res.push_back(t);

    while(!Q.empty()) {
        P = Q.front();
        Q.pop();
        tmp = P.first;
        level = P.second;
        if(res.size() <= level)
            res.push_back(t);
        res[level].push_back(tmp->val);
        if(tmp->left)
            Q.push(make_pair(tmp->left, level + 1));
        if(tmp->right)
            Q.push(make_pair(tmp->right, level + 1));
    } 
    return res;
}

void printVec(vector<int>& v) {
    for(int i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << endl;
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
    vector< vector<int> > r = levelorder(root);
    reverse(r.begin(), r.end());
    for(int i = 0 ; i < r.size() ; i++) {
        printVec(r[i]);
    }
    return 0;
}
