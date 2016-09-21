#include<bits/stdc++.h>
using namespace std;

int read[300005], tmp[300005];
vector<int> aux[300005];

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    int unread = 0;
    int start = 0, x, y, j, l = 0;
    int i = 0;
    while(q--) {
        scanf("%d%d", &x, &y);

        if(x == 1) {
            aux[y].push_back(i);
            ++i, ++unread;
        }
        else if(x == 2) {
            for(j = tmp[y] ; j < aux[y].size() ; ++j) {
                if(read[aux[y][j]] == 0) {
                    read[aux[y][j]] = 1;
                    --unread;
                }
            }
            tmp[y] = j;
        }
        else {
            for(j = start ; j < y ; ++j) {
                if(read[j] == 0) {
                    read[j] = 1;
                    --unread;
                }
            }
            start = max(start, j);
        }
        printf("%d\n", unread);

    }

    return 0;
}

