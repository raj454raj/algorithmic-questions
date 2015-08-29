#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5;
const int maxk = 1e5;
const int lim = 1e5 + 1;

int parent[lim];
int ancestor(int a)
{
    if (a != parent[a])
        parent[a] = ancestor(parent[a]);
    return parent[a];
}
void merge(int a, int b)
{
    a = ancestor(a);
    b = ancestor(b);
    if (a != b)
        parent[a] = b;
}

int main() {
    int n, k, x, y;
    cin >> n >> k;
    assert(1 <= n and n <= maxn);
    assert(1 <= k and k <= maxk);

    for(int i = 1 ; i <= n ; i++)
        parent[i] = i;

    for(int i = 1 ; i <= k ; i++) {
        int x, y;
        cin >> x >> y;
        assert(1 <= x and x <= n);
        assert(1 <= y and y <= n);
        merge(x, y);
    }
    set<int> s;
    for(int i = 1 ; i <= n ; ++i)
        s.insert(parent[i]);
    cout << s.size();
    return 0;
}
