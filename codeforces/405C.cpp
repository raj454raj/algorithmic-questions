#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int n, q, x;
    scanf("%d", &n);
    int tmp = 0;
    for(int i = 0 ; i < n ; ++i) {
        for(int j = 0 ; j < n ; ++j) {
            scanf("%d", &x);
            if(i == j) {
                tmp += x;
            }
        }
    }
    int ch;
    tmp %= 2;
    scanf("%d", &q);
    for(int i = 0 ; i < q ; ++i) {
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                    scanf("%d", &x);
                    tmp = 1 - tmp;
                    break;
            case 2:
                    scanf("%d", &x);
                    tmp = 1 - tmp;
                    break;
            case 3:
                    printf("%d", tmp);
        }
    }

    return 0;
}
