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
    int n;
    int arr[100005];
    scanf("%d", &n);
    for(int i = 0 ; i < n ; ++i) {
        scanf("%d", &arr[i]);
    }
    int i = n - 1;
    while(i > 0 && arr[i - 1] < arr[i])
        i--;
    printf("%d", i);
    return 0;
}

