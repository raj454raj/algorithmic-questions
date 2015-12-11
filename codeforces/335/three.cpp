#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int LIS(vector<int>& A)
{
    int N = A.size(),i;
    set<int> s;
    set<int>::iterator k;
    for (i=0;i<N;i++)
    {
        if (s.insert(A[i]).second)
        {
            k = s.find(A[i]);
            k++;
            if (k!=s.end())
                s.erase(k);
        }
    }
    return s.size();
}

int min(int a, int b) {
    if (a < b)
        return a;
    return b;
}

int main() {
    ios_base::sync_with_stdio(0);
    ll n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; ++i) {
        cin >> v[i];
    }
    int l = LIS(v);
    cout << v.size() - l;
    return 0;
}

