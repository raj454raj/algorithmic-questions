#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
using namespace std;
int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}

int findnext(int start, vector<int>& v, int max) {
    while(start + 1 <= max && v[start + 1] == 0) {
        start++;
    }
    return start + 1;
}

int findlower(int end, vector<int>& v, int min) {\
    while(end - 1 >= min && v[end - 1] == 0)
        end--;
    return end - 1;
}
int main() {
    int t, n, m, min, max, x, start, end, count;
    vector<int> v;
    t = readnum();

    while(t--) {
        n = readnum();
        m = readnum();
        min = 20005;
        max = 0;
        v.resize(100003);
        for(int i = 0 ; i < m ; i++) {
            x = readnum();
            v[x]++;
            if(x > max)
                max = x;
            if(x < min)
                min = x;
        }
        start = min; end = max; count = 0;
        while(m > 1) {
            if(start == 1) {
                count++;
                v[start]--;
                m--;
                if(v[start] == 0) {
                    start = findnext(start, v, max);
                }
                v[end]--;
                m--;
                if(v[end] == 0) {
                    end = findlower(end, v, min);
                }
            }
            else {
                count++;
                v[start]--;
                v[start - 1]++;
                start--;
                v[end]--;
                m--;
                if(v[end] == 0) {
                    end = findlower(end, v, min);
                }
            }
        }
        count += v[start] / 2;
        printf("%d\n", count);
        v.clear();
    }
    return 0;
}

