#include<bits/stdc++.h>
using namespace std;
struct shop {
    int x, y, z, index;
};

int main() {
    int i,j,t, n,m,x, y, z;
    
    scanf("%d", &t);
    vector<int> res;
    int tmp, max, index;
    while(t--) {
        scanf("%d%d", &n, &m);
        for(int i = 0 ; i < n ; i++) {
            max = INT_MAX;
            index;
            for(int j = 0 ; j < m ; j++) {
                scanf("%d%d%d", &x, &y, &z);
                tmp = (100 - x)*(100-y)*(100-z);
                if(max > tmp) {
                    max = tmp;
                    index = j+1;
                }
            }
            res.push_back(index);
        }
        for(int i = 0 ; i < res.size() ; i++)
            printf("%d ", res[i]);
        printf("\n");
        res.clear();
    }
    return 0;
}
