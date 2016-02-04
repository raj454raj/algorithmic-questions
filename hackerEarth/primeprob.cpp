#include<bits/stdc++.h>
#define ll long long int
//#define g getchar_unlocked
using namespace std;
/*int readnum() {
  int n = 0;
  char c = g();
  while(c < '0' || c > '9') c = g();
  while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
  return n;
  }*/
vector<int> prime;
vector<int> notprime(1000001, 0);
int i, j, z = 0;
void seive() {
    notprime[0] = 1;
    notprime[1] = 1;
    for(i = 2 ; i < 1000000 ; i++) {
        if(notprime[i] == 0) {
            prime.push_back(i);
            for(j = i + i ; j < 1000001 ; j += i)
                notprime[j] = 1;
        }
    }

}

vector<int>::iterator mylower(vector<int>& v, int x) {
    vector<int>::iterator it = lower_bound(v.begin(), v.end(), x);
    if(*it == x)
        return it;
    else if(it != v.begin()) {
        return (it - 1);
    }
    return v.begin();
}


int main() {
    ios_base::sync_with_stdio(0);
    seive();
    int t, l, r, start, end;
    cin >> t;
    double ans;
    while(t--) {
        cin >> l >> r;
        start = mylower(prime, l) - prime.begin();
        end = mylower(prime, r) - prime.begin();
        if(prime[start] < l)
            start++;
        if(prime[end] > r)
            end--;
        if(prime[start] > prime[end])
            ans = 0.0;
        else
            ans = (double)(end - start + 1) * 1.0 / (r - l + 1);
        printf("%0.6lf\n", ans);
    }
    return 0;
}

