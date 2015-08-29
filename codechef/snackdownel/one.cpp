#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    long long int incrementable, decrementable, sum = 0;
    char c;
    int count, flag;
    scanf("%d", &t);
    getchar();
    while(t--) {
        c = getchar();
        sum = 0;
        flag = 0;
        incrementable = 0;
        decrementable = 0;
        while(c != '\n') {
            sum += c - '0';
            sum %= 9;
            incrementable += 9 - (c - '0');
            decrementable += c - '0';
            c = getchar();
        }
        cout << incrementable << " " << decrementable << endl;
        if(sum > 4) {
            if(incrementable >= 9 - sum)
                sum = 9 - sum;
        }
        else {
            if(decrementable < sum)
                sum = 9 -sum;
        }
        if(!flag)
            sum = 8;
        cout << sum << endl;

    }
    return 0;
}
