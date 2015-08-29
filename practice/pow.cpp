#include<bits/stdc++.h>
using namespace std;
long long int modulo(long long int a, long long int b) {
        return (a%b + b)%b;
}
int power(int x, int n, int d) {
    if(x == 0)
        return 0;
    if(n == 0)
        return 1;
    if(n == 1) {
        return (int)modulo(x, d);
    }
    else {
        long long int tmp = modulo(power(x, n/2, d), d);
        if(n&1)
            return (int)modulo(((modulo((tmp * tmp),d))*x), d);
        else
            return (int)modulo((tmp*tmp),d);
    }

}
int main() {
    int x, n, d;
    cin>>x>>n>>d;
    cout << power(x, n, d);
    return 0;
}
