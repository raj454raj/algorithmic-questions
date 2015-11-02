#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int x, sum = 0;
    for(int i = 0 ; i < 5 ; ++i) {
        cin >> x;
        sum += x;
    }
    if(sum && sum % 5 == 0)
        cout << sum / 5;
    else
        cout << -1;
    return 0;
}

