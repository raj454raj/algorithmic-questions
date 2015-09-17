#include<bits/stdc++.h>
//#define g getchar_unlocked
#define ll long long int
using namespace std;
/*int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}*/
long long get_count(vector<int>& vec, int k) {
    //Initialize count array.
    vector<int> cnt_mod(k, 0);
    cnt_mod[0] = 1;
    int elem, pref_sum = 0;
    //Iterate over the input sequence.
    for(int i = 0 ; i < vec.size() ; ++i) {
        elem = vec[i];
        pref_sum += elem;
        pref_sum %= k;
        cnt_mod[pref_sum]++;
    }
    //Compute the answer.
    long long res = 0;
    for (int mod = 0; mod < k; mod++)
        res += (long long)cnt_mod[mod] * (cnt_mod[mod] - 1) / 2;
    return res;
}
int main() {
    ll n, m, x, k;
    scanf("%lld%lld", &n, &m);
    vector<int> vec(n);
    for(int i = 0 ; i < n ; i++) {
        scanf("%lld", &x);
        vec[i] = (int)x;
    }
    k = m;
    cout << get_count(vec, m);
    /*
    vector<ll> cnt_mod(k, 0);
    cnt_mod[0] = 1;
    ll elem;
    ll pref_sum = 0;
    for(int i = 0 ; i < vec.size() ; ++i) {
        elem = vec[i];
        pref_sum += elem;
        pref_sum %= k;
        cnt_mod[pref_sum]++;
    }
    ll res = 0;
    for(int i = 0 ; i < cnt_mod.size() ; ++i) {
        cout << cnt_mod[i] << " ";
    }
    cout << endl;
    for (ll mod = 0; mod < k; mod++)
        res += ((ll)cnt_mod[mod] * (ll)(cnt_mod[mod] - 1)) / 2;
    cout << res;*/
    return 0;
}

