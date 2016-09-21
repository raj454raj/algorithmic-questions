#include <bits/stdc++.h>
using namespace std;

int t[300005], r[300003];

vector <int> p[300003];

int main()
{
    int n, q, x, y, l, c, ans, i;
    scanf("%d %d", &n, &q);
    l = c = 0;
    int start = 0;
    ans = 0;
    while(q--){
        scanf("%d %d", &x, &y);
        if(x==1){
            r[c] = 0;
            p[y].push_back(c);
            c++;
            ans++;
        }
        if(x==2){
            for(i=t[y];i<p[y].size();i++){
                if(!r[p[y][i]]){
                    r[p[y][i]] = 1;
                    --ans;
                }
            }
            t[y]=i;
        }
        if(x==3){
            for(l = start;l<y;l++){
                if(!r[l]){
                    r[l]=1;
                    --ans;
                }
            }
            start = max(start, l);
        }
        printf("%d\n", ans);
    }
    return 0;
}
