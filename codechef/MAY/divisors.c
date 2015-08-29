#include<stdio.h>
#include<math.h>
int check(long long int a, long long int b) {
    int i;
    if(a%b == 0)
        return 1;
    if(!(b&1)) {
        if(a&1)
            return 0;
        else
            b = b / 2;
    }
    for(i = 3 ; i <= sqrt(b) ; i += 2) {
        if(b%i == 0) {
            if(a%i != 0)
                return 0;
            else
                b = b / i;
        }
    }
    if(b > 2) {
        if(a%b == 0)
            return 1;
        else
            return 0;
    }

    return 1;
}

int main() {
    long long int a, b;
    int t;
    scanf("%d", &t);
    while(t--) {
        scanf("%lld%lld", &a, &b);
        if(check(a, b))
            printf("Yes\n");
        else
            printf("No\n");
    }
    
    return 0;
}
