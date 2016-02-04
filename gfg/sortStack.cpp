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

void sortedInsert(stack<int>& s, int v) {
    if(s.empty())
        s.push(v);
    else {
        int tmp = s.top();
        if(tmp > v) {
            s.pop();
            sortedInsert(s, v);
            s.push(tmp);
        }
        else
            s.push(v);
    }
}

void Sort(stack<int>& s) {
    if(s.empty()) {
        return;
    }
    else {
        int tmp = s.top();
        s.pop();
        Sort(s);
        sortedInsert(s, tmp);
    }
}

void printStack(stack<int> s) {
    if(s.size() == 0)
        return;
    else {
        // I am STUD
        cout << s.top() << "  <--" << endl;
        s.pop();
        while(!s.empty()) {
            cout << s.top() << endl;
            s.pop();
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    int n, x;
    cin >> n;
    stack<int> s;
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        s.push(x);
    cout << "********************\n";
    Sort(s);
    printStack(s);

    return 0;
}

