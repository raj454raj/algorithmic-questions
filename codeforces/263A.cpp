#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int x, posx, posy;
    for(int i = 0 ; i < 5 ; ++i) {
        for(int j = 0 ; j < 5 ; ++j) {
            scanf("%d", &x);
            if(x == 1) {
                posx = i;
                posy = j;
            }
        }
    }
    cout << abs(posx - 2) + abs(posy - 2);
    return 0;
}

