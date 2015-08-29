#include<bits/stdc++.h>
using namespace std;
struct conv {
    int num;
    string str;
    conv(int x, string s): num(x), str(s) {};
};
conv c[13] = {conv(1, "I"),
              conv(4, "IV"),
              conv(5, "V"),
              conv(9, "IX"),
              conv(10, "X"),
              conv(40, "XL"),
              conv(50, "L"),
              conv(90, "XC"),
              conv(100, "C"),
              conv(400, "CD"),
              conv(500, "D"),
              conv(900, "CM"),
              conv(1000, "M")
              };
int N, K;
string s;

void compute(int n) {
    while(N >= n) {
        N -= n;
        s += c[K].str;
    }
}
string intToRoman(int n) {
    N = n;
    K = 12;
    s = "";
    for(int i = 12 ; i >= 0 ; i--) {
        compute(c[i].num);
        K--;
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    cout << intToRoman(n);
    return 0;
}
