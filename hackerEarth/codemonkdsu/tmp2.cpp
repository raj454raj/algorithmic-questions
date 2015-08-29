#include <bits/stdc++.h>
using namespace std;
void optimizeIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
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
int main()
{
    optimizeIO();
    int n, k;
    cin >> n >> k;
    assert(1 <= n and n <= maxn);
    assert(1 <= k and k <= maxk);
    for (int i = 1; i <= n; i++)
        parent[i] = i;
    for (int i = 1; i <= k; i++)
    {
        int city1, city2;
        cin >> city1 >> city2;
        assert(1 <= city1 and city1 <= n);
        assert(1 <= city2 and city2 <= n);
        merge(city1, city2);
    }
    for (int i = 1; i <= n; i++)
        parent[i] = ancestor(i);
    set<int> representativeElements;
    for (int i = 1; i <= n; i++)
        representativeElements.insert(parent[i]);
    int ans = (int) representativeElements.size();
    cout << ans;
    return 0;
}
