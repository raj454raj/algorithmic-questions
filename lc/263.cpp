#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
using namespace std;

bool isUgly(int num) {
    if(num == 1)
        return true;
    ll *ugly = (ll *)malloc(100000 * sizeof(int));
    ugly[0] = 1;
    ll two = 2, curr = 1, three = 3, five = 5;
    int i2, i3, i5;
    i2 = i3 = i5 = 0;
    for(int i = 1 ; i < 100000 ; ++i) {
        curr = min(two, min(three, five));
        if(curr == num)
            return true;
        if(curr > num)
            return false;
        ugly[i] = curr;
        if(curr == two) {
            i2++;
            two = ugly[i2] * 2; 
        }
        if(curr == three) {
            i3++;
            three = ugly[i3] * 3;
        }
        if(curr == five) {
            i5++;
            five = ugly[i5] * 5;
        }
    }
}
int main() {
    int n;
    cin >> n;
    cout << isUgly(n) << endl;
    return 0;
}

