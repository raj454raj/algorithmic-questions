#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;
int main() {
    int n, x;
    int count= 0, flag = 0;
    scanf("%d%d", &n, &x);
    for(int i = 1 ; i <= sqrt(x) ; ++i) {
        if(x%i == 0 && x / i <= n && i <= n) {
            if(x / i == i)
                flag = 1;
            count++;
        }
    }
    if(flag)
        count = 2*count - 1;
    else
        count = 2*count;
    printf("%d", count);
    return 0;
}

