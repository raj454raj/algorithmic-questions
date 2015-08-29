#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int na, nb, k, m;
    scanf("%d%d", &na, &nb);
    scanf("%d%d", &k, &m);
    int a[100005], b[100005];
    for(int i = 0 ; i < na ; ++i)
        scanf("%d", &a[i]);
    for(int i = 0 ; i < nb ; ++i)
        scanf("%d", &b[i]);

    int j = nb - m;
    if(m == nb)
        j = 0;
    if (j == nb)
        j = nb - 1;
    int i = k - 1;

        if(b[j] > a[i]) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    return 0;
}

