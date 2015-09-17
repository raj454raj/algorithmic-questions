#include<bits/stdc++.h>
#define ll long long int
using namespace std;

string helper(int n) {
    if(n == 0)
        return "";
    int tmp = n % 100;
    const char *str[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    vector<string> st(str, str + 20);
    const char *other[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    vector<string> ot(other, other + 10);
    string fin = "";
    if(st[n / 100] != "") {
        if(tmp == 0)
            fin += st[n / 100] + " Hundred";
        else
            fin += st[n / 100] + " Hundred ";
    }
    if(tmp <= 19) {
        fin += st[tmp];
    }
    else {
        int t = tmp / 10;
        if(t >= 2) {
            if(tmp%10 == 0)
                fin+=ot[t];
            else
                fin += ot[t] + " ";
        }
        fin += st[tmp % 10];
    }

    return fin;
}

string numberToWords(int n) {
    list<string> tmp;
    int i = 0;
    if(n == 0)
        return "Zero";
    vector<string> v;
    v.push_back("");
    v.push_back(" Thousand");
    v.push_back(" Million");
    v.push_back(" Billion");
    string tr = "";
    while(n) {
        tr = helper(n % 1000);
        if(tr != "")
            tr += v[i];
        tmp.push_front(tr);
        n /= 1000;
        ++i;
    }
    string fin = "";
    list<string>::iterator it;
    for(it = tmp.begin() ; it != tmp.end() ; ++it) {
        if(*it != "")
            fin += *it + " ";
    }
    while(isspace(*fin.rbegin()))
        fin.erase(fin.length()-1);
    return fin;
}

int main() {
    int t, n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        cout << numberToWords(n) << endl;
    }
    return 0;
}

