#include<stdio.h>
double myPow(double x, int n) {
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else if (x == 1)
        return 1;
    else if(x == 0 && n < 0) {
        return -1;
    }
    else if(x == -1) {
        if(n&1)
            return -1;
        else
            return 1;
    }
    else if (n < 0) {
        return (double) (1 / myPow(x, -n));
    }
    else {
        double temp = myPow(x, n / 2);
        if(n & 1)
            return temp * temp * x;
        else
            return temp * temp;
    }
}

int main() {
    int n;
    double x;
    scanf("%lf %d", &x, &n);
    printf("%lf", myPow(x, n));
    return 0;
}
