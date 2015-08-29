#include<bits/stdc++.h>
using namespace std;
int countDigitOne(int n) {
    if(n <= 0)
        return 0;
    string s;
    int sum = 0;
    ostringstream convert;
    for(int i = 1 ; i <= n ; i++) {
        convert << i;
        s = convert.str();
        sum += count(s.begin(), s.end(), '1');
        convert.str("");
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << countDigitOne(n);
    return 0;
}
