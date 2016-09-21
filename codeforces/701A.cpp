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
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(102);
    vector<bool> mark(102);
    int total = 0;
    for(int i = 0 ; i < n ; i++) {
        cin >> v[i];
        total += v[i];
        mark[i] = false;
    }
    int tmp = n / 2;
    int half = total / tmp;
    for(int i = 0 ; i < n - 1 ; ++i) {
        if(mark[i])
            continue;
        for(int j = i + 1 ; j < n ; j++) {
            if(mark[j])
                continue;
            if(v[i] + v[j] == half) {
                tmp--;
                cout << i + 1 << " " << j + 1;
                if(tmp)
                    cout << endl;
                mark[i] = true;
                mark[j] = true;
                break;
            }
        }
    }

    return 0;
}

