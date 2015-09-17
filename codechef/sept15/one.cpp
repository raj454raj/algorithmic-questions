#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
using namespace std;
int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}

int calcDistance(pair<int, int> a, pair<int, int> b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
}
int main() {
    int t, n;
    t = readnum();
    int arr[502][502];
    vector< pair<int, int> > v;
    while(t--) {
        n = readnum();

        v.resize(n * n + 1);
        v[0] = make_pair(0, 0);
        for(int i = 0 ; i < n ; ++i) {
            for(int j = 0 ; j < n ; ++j) {
                arr[i][j] = readnum();
                v[arr[i][j]] = make_pair(i + 1, j + 1);
            }
        }
        if(n == 1) {
            printf("0\n");
            continue;
        }
        pair<int, int> prev = v[1];
        int sum = 0;
        for(int i = 2 ; i < v.size() ; ++i) {
            sum += calcDistance(prev, v[i]);
            prev = v[i];
        }
        printf("%d\n", sum);
    }

    return 0;
}

