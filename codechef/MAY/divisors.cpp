#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int main(){

    long long int t, a, b, value, val;
    scanf("%lld", &t);
    while(t--) {
        scanf("%lld%lld", &a, &b);
        value = gcd(a,b);
        if(b == 1)
            printf("Yes\n");
        else if(value == 1)
            printf("No\n");
        else {
            b = b / value;
            val = value;
            while(1) {
                val = gcd(b,val);
                if(val == 1) {
                    break;
                }
                b = b / val;
            }
            if(b == 1)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }

    return 0;
}

