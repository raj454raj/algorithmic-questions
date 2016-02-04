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

int candy(vector<int>& v) {
    int tmp = 1, prev;
    int sum = 0;
    if(v.size() == 0)
        return 0;
    int i = 1, cnt;
    prev = v[0];
    sum = 1;
    while(i < v.size()) {
        if(v[i] > prev) {
            sum += ++tmp;
            prev = v[i];
            i++;
        }
        else {
            prev = v[i];
            ++i;
            cnt = 0;
            while(i < v.size() && v[i] < prev) {
                cnt++;
                prev = v[i];
                i++;
            }
            tmp = 1;
            if(!cnt)
                sum += 1;
            else
                sum += (cnt * (cnt + 1)) / 2;
        }
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; ++i) {
        cin >> v[i];
    }

    cout << candy(v);
    return 0;
}

