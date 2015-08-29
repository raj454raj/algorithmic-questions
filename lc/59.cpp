#include<bits/stdc++.h>
using namespace std;
int** generateMatrix(int n) {
    int i, j, count = 1, start = 0, end = n - 1;
    int **a = (int **)malloc(sizeof(int *) * n);
    for(i = 0 ; i < n ; i++) {
        *(a + i) = (int *)malloc(sizeof(int) * n);
    }
    while(1) {
        if(start > end)
            return a;
        else if(start == end) {
            a[start][end] = count++;
        }
        if(count > n * n)
            return a;
        for(j = start ; j < end ; j++) {
            a[start][j] = count++;
            if(count > n * n)
                return a;
        }
        for(i = start ; i < end ; i++) {
            a[i][end] = count++;
            if(count > n * n)
                return a;
        }
        for(j = end ; j > start ; j--) { 
            a[end][j] = count++;
            if(count > n * n)
                return a;
        }
        for(i = end ; i > start ; i--) {
            a[i][start] = count++;
            if(count > n * n)
                return a;
        }
        start++;
        end--;
    }        
}

int main() {
    int n;
    cin >> n;
    int **a = generateMatrix(n);
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
