#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b) {
    if(a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}

int marked[10000] = {0};
int main() {
    int n, x;
    scanf("%d", &n);
    vector<int> v;
    for(int i = 0 ; i < n ; ++i) {
        scanf("%d", &x);
        v.push_back(x);
    }
    int prev = 1;
    int dir = 1, count = 0, info = 0, i = 0;
    while(1) {
        if(dir == 1) {
            if(v[i] <= info) {
                if(marked[i] == 0) {
                    info++;
                    marked[i] = 1;
                }
                i++;
            }
            else {
                i++;
            }
        }
        else {
            if(v[i] <= info) {
                if(marked[i] == 0) {
                    info++;
                    marked[i] = 1;
                }
                i--;
            }
            else {
                i--;
            }
        }
        if(info == n)
            break;
        if(i == n) {
            i = n - 1;
            count++;
            dir = -1;
        }
        if(i == -1) {
            i = 0;
            dir = 1;
            count++;
        }

    }
    cout << count;
    return 0;
}

