#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int flag, n, i, j, sum, cnt;
    scanf("%d", &t); 
        int a[52];
        int b[52];
    while(t--) {
        sum = 0;flag = 0;
        scanf("%d", &n);
        for(i = 0 ; i < n ; i++) {
            b[i] = 0;
            scanf("%d", &a[i]);
            sum += a[i];
            if(sum > n)
                flag = 1;
            if(a[i] == n)
                flag = 1;
        }
        if(flag || sum != n) {
            printf("-1\n");
            continue;
        }
        else {
            vector<int> v;
            for(i = 0 ; i < n ; i++) {
                for(j = 0 ; j < a[i] ; j++) {
                    v.push_back(i + 1);
                }
            }
            int x;
            while(1) {
                random_shuffle(v.begin(), v.end());
                i = 0;
                flag = 0;
                for(vector<int>::iterator it=v.begin();it!=v.end();it++,i++) {
                    if(i + 1 == *it)
                        flag = 1;
                }
                if(flag)
                    continue;
                else {
                    for(vector<int>::iterator it = v.begin();it!=v.end();it++)
                        printf("%d ", *it);
                    printf("\n");
                    break;
                }
            }
           // for(i = 0 ; i < n ; i++)
             //   printf("%d ", b[i]);
        /*    if(n&1) {
                printf("%d ", n / 2 + 1); 
                for(i = n ; i > 1 ; i--) {
                    if(i != (n / 2 + 1))
                        printf("%d ", i);
                }
                printf("1");
            }
            else {
                for(i = n ; i > 1 ; i--) {
                    printf("%d ", i);
                }
                printf("1");
            }
            printf("\n");*/
        }
    }
    return 0;
}
