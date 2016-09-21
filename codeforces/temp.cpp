#include<bits/stdc++.h>
using namespace std;
int read[300002], tmp[300002];
vector<int> aux[300002];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    int unread = 0;
    int start = 0, x, y, j;
    int i = 0;
    while(q--) {
        cin >> x >> y;
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
            start = max(start, y);
        }
        cout << unread << endl;

    }

    return 0;
}
