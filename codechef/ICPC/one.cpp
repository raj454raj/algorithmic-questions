#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#include <stdio.h>
#include <math.h>

void printPowerSet(char *set, int set_size)
{
    /*set_size of power set of a set with set_size
      n is (2**n -1)*/
    unsigned int pow_set_size = pow(2, set_size);
    int counter, j;

    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_set_size; counter++)
    {
        for(j = 0; j < set_size; j++)
        {
            /* Check if jth bit in the counter is set
               If set then pront jth element from set */
            if(counter & (1<<j))
                printf("%c", set[j]);
        }
        printf("\n");
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    ll t, n;

    scanf("%lld", &t);
    while(t--) {
        scanf("%lld", &n);
        for(int i = 0 ; i < n ; ++i) {
            scanf("%lld", &x);
        }
    }
    return 0;
}

