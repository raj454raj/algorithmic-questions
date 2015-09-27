#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int arr[4005][4005] = {0};
vector< vector<int> > v(4005);

void print(vector<int>& v) {
    for(int i = 0 ; i < v.size() ; ++i)
        cout << v[i] << " ";
    cout << endl;
}
int main() {
    int m, n, x, y;
    scanf("%d%d", &n, &m);
    for(int i = 0 ; i < m ; ++i) {
        scanf("%d%d", &x, &y);
        arr[x][y] = 1;
        arr[y][x] = 1;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    int len, sum;
    int min = INT_MAX;
    for(int i = 1 ; i <= n ; ++i) {
        len = v[i].size();
        for(int j = 0 ; j < len ; ++j) {
            for(int k = j + 1 ; k < len ; ++k) {
                if(arr[v[i][j]][v[i][k]]) {
                    sum = v[i].size() + v[v[i][j]].size() + v[v[i][k]].size() - 6;
                    if(sum < min)
                        min = sum;
                }
            }
        }
    }
    if(min == INT_MAX)
        printf("-1");
    else
        printf("%d", min);
    return 0;
}
