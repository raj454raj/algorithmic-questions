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
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int contains(int a, int b, int c, int d) {
    if(a - c >= 0 && b - d >= 0)
        return 1;
    else if(a - d >= 0 && b - c >= 0)
        return 1;
    return 0;
}
int main() {
    int a1, b1, a2, b2, a3, b3, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8;
        
    scanf("%d%d%d%d%d%d", &a1, &b1, &a2, &b2, &a3, &b3);
    if(a1*b1 < a2*b2+a3*b3)
        printf("NO");
    else if(a2 > max(a1, b1) | a3 > max(a1, b1) | b2 > max(a1, b1) | b3 > max(a1, b1))
        printf("NO");

    else {
        if(a1 > b1)
            swap(&a1, &b1);
        if(a2 > b2)
            swap(&a2, &b2);
        if(a3 > b3)
            swap(&a3, &b3);
        tmp1 = a1; tmp2 = b1 - b2;
        tmp3 = a1 - a2;tmp4 = b1;
        tmp5 = b1; tmp6 = a1 - b2;
        tmp7 = b1 - a2; tmp8 = a1;

        if(contains(tmp1, tmp2, a3, b3) | contains(tmp3, tmp4, a3, b3) | contains(tmp5, tmp6, a3, b3) | contains(tmp7, tmp8, a3, b3)) {
            printf("YES");
        }
        else
            printf("NO");
    }
    return 0;
}

