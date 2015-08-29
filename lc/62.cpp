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
int uniquePaths(int m, int n) {
/*    int **arr = (int **)malloc(m * sizeof(int *));
    for(int i = 0 ; i < n ; ++i)
        *(arr + i) = (int *)malloc(sizeof(int));
*/
    int arr[102][102];

    if(m == 1 && n == 1)
        return 1;
    arr[0][0] = 0;
    for(int i = 1 ; i < m ; ++i) {
        arr[i][0] = 1;
    }
    for(int i = 1 ; i < n ; ++i) {
        arr[0][i] = 1;
    }
    for(int i = 1 ; i < m ; ++i) {
        for(int j = 1 ; j < n ; ++j) {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    } 
    return arr[m - 1][n - 1];
}
int main() {
    int t, n, m;
    //t = readnum();
    scanf("%d", &t);
    while(t--) {
        scanf("%d%d", &m, &n);
        cout << uniquePaths(m, n) << endl;;
    }
    return 0;
}

