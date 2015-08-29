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
ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}
ll lcm(vector<int> a, int n) {
    ll res = 1, i;
    res = a[0];
    for (i = 1; i < a.size(); i++) {
        res = gcd(res, (ll)a[i]);
    }
    return res;
}
int main() {
    int n, x;
    //t = readnum();
    scanf("%d", &n);
    vector<int> v;
    for(int i = 0 ; i < n  ; i++) {
        scanf("%d", &x);
        v.push_back(x);
    }
    ll tmp, l = lcm(v, n);
    int flag = 0;
    for(int i = 0 ; i < n ; ++i) {
        tmp = v[i] / l;
        while((tmp%2) == 0) {
            tmp /= 2;
        }
        while(tmp%3 == 0)
            tmp /= 3;
        if(tmp == 1)
            continue;
        else {
            flag = 1;
            break;
        }
    }
    if(flag)
        printf("No");
    else
        printf("Yes");
    return 0;
}

