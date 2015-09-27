#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    string s;
    cin >> s;
    int l = s.size(), a, b, c, n;
    vector<int> number;
    number.push_back(0);
    number.push_back(0);
    for(int i = 0 ; i < l ; ++i)
        number.push_back((int)(s[i] - '0'));
    for(int i = 0 ; i < number.size() ; i++) {
        for(int j = i + 1 ; j < number.size()  ; j++) {
            for(int k = j + 1 ; k < number.size() ; k++) {
                n = 100 * number[i] + 10 * number[j] + number[k];
                if(n % 8 == 0) {
                    printf("YES\n%d", n);
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}

