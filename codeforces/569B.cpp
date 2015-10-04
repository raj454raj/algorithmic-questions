#include<bits/stdc++.h>
//#define g getchar_unlocked
#define ll long long int
using namespace std;
int a[100005];
int b[100005] = {0};
int c[100005] = {0};
int main() {
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i];
        b[a[i]]++;
    }
    vector<int> v;
    for(int i = 1 ; i <= n ; ++i) {
        if(b[i] == 0)
            v.push_back(i);
    }
    int start = 0;
    for(int i = 0 ; i < n ; ++i) {
        if(a[i] > n) {
            cout << v[start] << " ";
            start++;
        }
        else if(c[a[i]] == 0) {
            cout << a[i] << " ";
            c[a[i]] = 1;
        }
        else {
            cout << v[start] << " ";
            start++;
        }
    }

    return 0;
}
