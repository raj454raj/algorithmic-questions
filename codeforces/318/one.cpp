#include<bits/stdc++.h>
//#define g getchar_unlocked
#define ll long long int
using namespace std;
/*int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}*/
int main() {
    int n, sum = 0, x;
    scanf("%d", &n);
    vector<int> v;
    int max = 0;
    for(int i = 0 ; i <  n ; i++) {
        scanf("%d", &x);
        v.push_back(x);
        sum += x;
        if(x > max)
            max = x;
    }
    int tmp = v[0];
            vector<int>::iterator it;
        sum = sum - tmp;
        int count = 0;
        while(sum) {
            it = max_element(v.begin() + 1, v.end());
            if(*it < tmp)
                break;
            count++;
            (*it)--;
            tmp++;
            v[0]++;
            sum--;
        }
        printf("%d", count);
    return 0;
}

