#include<bits/stdc++.h>
using namespace std;
int divide(int dividend, int divisor) {
    int sign = 1;
    long long int sor = (long long int)divisor;
    long long int dend = (long long int)dividend;
    if(dend < 0) {
        sign = -1;
        dend = -dend;
    }
    if(sor < 0) {
        sign = -sign;
        sor = -sor;
    }
    if(sor == 0)
        return INT_MAX;
    if(dend == 0)
        return 0;
    if(sor == 1) {
        if(sign * dend > INT_MAX)
            return INT_MAX;
        return sign * dend;
    }
    int quotient = 0, shift;
    while(dend >= sor) {
        shift = 0;
        while(dend >= (sor<<shift)) {
            cout << shift << " ";
            shift++;
        }
        quotient += (1<<(shift - 1));
        dend -= (sor<<(shift - 1));
    }
    if(sign * dend > INT_MAX)
        return INT_MAX;
    return sign * quotient;
}

int main() {
    cout << divide(-2147483648, -1);
    return 0;
}
