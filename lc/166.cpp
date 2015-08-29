#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
using namespace std;

string toString(ll n) {
    ostringstream ss;
    ss << n;
    return ss.str();
}

string fractionToDecimal(int numerator, int denominator) {
    int sign = 1;
    ll num = (ll)numerator, den = (ll)denominator;
    if((num >= 0 && den > 0) || (num < 0 && den < 0))
        sign = 1;
    else {
        sign = -1;
        if(num < 0)
            num = -num;
        else
            den = -den;
    }
    string fin = "";
    if(sign < 0)
        fin = "-";
    ll decimal = num / den;
    fin += toString(decimal);
    num = (num - decimal * den) * 10;
    if(num)
        fin += ".";
    else {
        if(decimal == 0 && num == 0)
            return "0";
        else
            return fin;
    }
    map<pair<ll, ll>, ll> tmp;
    int flag = 0;
    string after = "";
    int count = 1;
    pair<ll, ll> t;
    while(num) {
        decimal = num / den;
        t = make_pair(decimal, num);
        if(tmp[t] == 0) {
            after += toString(decimal);
            tmp[t] = count;
        }
        else {
            flag = 1;
            break;
        }
        count++;
        num = (num - decimal * den) * 10;
    }
    if(flag) {
        after += ")";
        after.insert(tmp[t] - 1, 1, '(');
    }
    fin += after;
    return fin;
}

int main() {
    int t, n, d;
    cin >> t;
    while(t--) {
        cin >> n >> d;
        cout << fractionToDecimal(n, d) << endl;
    }
    return 0;
}

