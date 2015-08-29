#include<bits/stdc++.h>
#include<stdio.h>
using namespaces std;

int countPrimes(int n) {

    int prime, a, c, count = 0;
    for (a = 2 ; a < sqrt(n) ; a++) {
        prime = 1;
        for(c=2 ; c*c <= a ; c++) {
            if(a % c == 0) {
                prime = 0;
                break;
            }
        }
        if(prime) {
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d ", countPrimes(n));
    return 0;
}
