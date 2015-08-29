#include<bits/stdc++.h>
using namespace std;
bool compare(int a, int b) {
    return a>b;
}
int main() {
    int x,y,t, i, j,tmp;
    vector<int> v,a,b,c;
    scanf("%d", &t);
    while(t--) {
        a.clear();
        b.clear();
        scanf("%d%d", &x, &y);
        for(i = 0 ; i < x ; i++) {
            cin >> tmp;
            a.push_back(tmp);    
        }
        for(i = 0 ; i < y ; i++) {
            cin >> tmp;
            b.push_back(tmp);    
        }
        i = 0; j = 0;
        c.clear();
        while(i<x&&j<y) {
            if(a[i] > b[j]) {
                c.push_back(a[i]);
                i++;
            }
            else {
                c.push_back(b[j]);
                j++;
            }
        }
        while(i<x) {
                c.push_back(a[i]);
                i++;
        
        }
        while(j<y) {
                c.push_back(b[j]);
                j++;
        
        }
        for(i = 0 ; i < x + y ; i++) {
            cout <<c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
