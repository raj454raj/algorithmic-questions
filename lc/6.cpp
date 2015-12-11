#include<bits/stdc++.h>
#define ll long long int
//#define g getchar_unlocked
using namespace std;
/*int readnum() {
  int n = 0;
  char c = g();
  while(c < '0' || c > '9') c = g();
  while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
  return n;
  }*/
string convert(string s, int numRows) {
    int first = numRows * 2 - 2, second = 0;
    string fin = "";
    int i = 0, flag, tmpi;
    if(numRows == 1)
        return s;
    while(i < numRows) {
        tmpi = i;
        if(first)
            flag = 0;
        else
            flag = 1;
        while(tmpi < s.size()) {
            fin += s[tmpi];
            if(!flag) {
                tmpi += first;
                if(second != 0)
                flag = 1 - flag;
            }
            else {
                tmpi += second;
                if(first != 0)
                flag = 1 - flag;
            }
        }
        i++;
        first -= 2;
        second += 2;
    }
    return fin;
}
int main() {
    ios_base::sync_with_stdio(0);
    string s;
    int n;
    cin >> s;
    cin >> n;
    cout << convert(s, n);
    return 0;
}

