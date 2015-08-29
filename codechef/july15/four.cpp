#include<bits/stdc++.h>
#define M 1000000007
#define g getchar_unlocked
#define LL long long int
using namespace std;

LL readnum() {
    LL n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}

int getMid(int start, int end) {
    return (start + (end - start) / 2);
}

LL constructTreeUtil(vector<LL> a, int start, int end, vector<LL>& tree, int si)
{
    if (start == end) {
        tree[si] = a[start] % M;
        return tree[si];
    }

    int mid = getMid(start, end);
    LL p = constructTreeUtil(a, start, mid, tree, si * 2 + 1);
    LL q = constructTreeUtil(a, mid + 1, end, tree, si * 2 + 2);

    tree[si] = (p % M + q % M) % M;

    return tree[si];
}

vector<LL> constructTree(vector<LL>& a, int n) {
    vector<LL> tree(2 * n - 1);
    constructTreeUtil(a, 0, n - 1, tree, 0);
    return tree;
}

void updateValueUtil(vector<LL>& tree, int start, int end, int i, int diff, int index) {
    // Base Case: If the input index lies outside the range of this segment
    if (i < start || i > end)
        return;

    // If the input index is in range of this node, then update the value
    // of the node and its children
    tree[index] = tree[index] + diff;
    if (end != start) {
        int mid = getMid(start, end);
        updateValueUtil(tree, start, mid, i, diff, 2 * index + 1);
        updateValueUtil(tree, mid + 1, end, i, diff, 2 * index + 2);
    }
}

// The function to update a value in input array and segment tree.
// It uses updateValueUtil() to update the value in segment tree
void updateValue(vector<LL>& a, vector<LL>& tree, int n, int i, int new_val)
{
    // Check for erroneous input index
    if (i < 0 || i > n-1)
    {
        printf("Invalid Input");
        return;
    }

    // Get the difference between new value and old value
    int diff = new_val - a[i];

    // Update the value in array
    a[i] = new_val;

    // Update the values of nodes in segment tree
    updateValueUtil(tree, 0, n - 1, i, diff, 0);
}

LL getSumUtil(vector<LL>& tree, int start, int end, int qstart, int qend, int index) {
    // If segment of this node is a part of given range, then return the 
    // sum of the segment
    if (qstart <= start && qend >= end)
        return tree[index];

    // If segment of this node is outside the given range
    if (end < qstart || start > qend)
        return 0;

    // If a part of this segment overlaps with the given range
    int mid = getMid(start, end);
    return (getSumUtil(tree, start, mid, qstart, qend, 2 * index + 1) +
           getSumUtil(tree, mid + 1, end, qstart, qend, 2 * index + 2)) % M;
}

LL getSum(vector<LL>& tree, int n, int qstart, int qend) {
    // Check for erroneous input values
    if (qstart < 0 || qend > n - 1 || qstart > qend)
    {
        printf("Invalid Input");
        return -1;
    }

    return getSumUtil(tree, 0, n - 1, qstart, qend, 0) % M;
}

void printTree(vector<LL>& tree) {
    for(int i = 0 ; i < tree.size() ; ++i) {
        cout << tree[i] << " ";
    }
    cout << endl;
}
int main() {
    LL i, n, x, y, v, q, pro;
    n = readnum();
    q = readnum();

    vector<LL> a;
    vector<LL>::iterator it, newit;
    for(i = 0 ; i < n ; i++) {
        x = readnum();
        a.push_back(x);
    }
    vector<LL> tree = constructTree(a, n);
    LL ch, newval;
    while(q--) {
        ch = readnum();
        switch(ch) {
            case 1: {
                        x = readnum();
                        y = readnum();
                        v = readnum();
                        --x; --y;
                        for(i = x ; i <=y ; ++i) {
                            newval = (a[i] + v) % M;
                            updateValue(a, tree, n, i, newval);
                        }
                        break;                         
                    }
            case 2: {
                        x = readnum();
                        y = readnum();
                        v = readnum();
                        --x; --y;
                        for(i = x ; i <= y ; ++i) {
                            newval = (a[i] * v) % M;
                            updateValue(a, tree, n, i, newval);
                        }
                        break;                         

                    }
            case 3: {
                        x = readnum();
                        y = readnum();
                        v = readnum();
                        --x; --y;
                        for(i = x ; i <= y ; ++i) {
                            updateValue(a, tree, n, i, v);
                        }
                        break;                         
                    }
            case 4: {
                        x = readnum();
                        y = readnum();
                        --x; --y;
                        cout << getSum(tree, n, x, y) << endl;
                        break;                         
                    }
            default: cout<<"what";
        }
    }
    return 0;
}
