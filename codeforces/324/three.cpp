#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int n, t;
    cin >> n >> t;
    string a, b;
    cin >> a;
    cin >> b;
    vector<int> pos;
    int same = 0;
    for(int i = 0 ; i < n ; ++i) {
        if(a[i] == b[i]) {
            same++;
            pos.push_back(i);
        }
    }
    int different = n - same;
    int flag = 0;
    string final_string = "";

    for(int i = 0 ; i < n ; ++i) {
        if(a[i] == b[i]) {
            final_string += a[i];
        }
        else {
            t--;
            for(int j = 0 ; j < 26 ; ++j) {
                char c = (char)(j + 'a');
                if(c != a[i] && c != b[i]) {
                    final_string += c;
                    break;
                }
            }
        }
    }
    if(t != 0) {
        for(int i = 0 ; i < n ; ++i) {
            if(t) {
                if(a[i] == b[i]) {
                    t--;
                    for(int j = 0 ; j < 26 ; ++j) {
                        char c = (char)(j + 'a');
                        if(c != a[i]) {
                            final_string[i] = c;
                            break;
                        }
                    }
                }
            }
            else
                break;
        }
        if(t)
            cout << -1;
        else
            cout << final_string;
    }
    else {
        cout << final_string;
    }
    return 0;
}
