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
template<class Iter, class T>
Iter binary_find(Iter begin, Iter end, T val)
{
    // Finds the lower bound in at most log(last - first) + 1 comparisons
    Iter i = std::lower_bound(begin, end, val);

    if (i != end && !(val < *i))
        return i; // found
    else
        return end; // not found
}

bool ispowerof2(int n) {
    return !(n & (n - 1));
}

int nextPowerOf2(int n) {
    int p = 1;
    if(ispowerof2(n))
        return n << 1;
    if (n && !(n & (n - 1))) {
        return n;
    }

    while (p < n) {
        p <<= 1;
    }
    return p;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, x;
    cin >> n;
    vector<int> v;
    int m = INT_MIN;
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        v.push_back(x);
        m = max(m, x);
    }
    sort(v.begin(), v.end());
    vector<int>::iterator it;
    int nextpower, count = 0;
    m = nextPowerOf2(m);
    for(int i = 0 ; i < n ; ++i) {
        nextpower = nextPowerOf2(v[0]);
        it = v.begin() + i;
        while(nextpower <= m) {
            if(nextpower - v[0] > v[0]) {
                it = binary_find(it + 1, v.end(), nextpower - v[0]);
                if(it != v.end()) {
                    cout << v[0] << " " << nextpower - v[0] << endl;
                    count++;
                }
            }
            nextpower = nextPowerOf2(nextpower);
        }
    }
    return 0;
}

