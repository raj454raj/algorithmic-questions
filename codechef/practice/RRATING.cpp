#include<bits/stdc++.h>
#define g getchar_unlocked
using namespace std;
int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10*n + c - '0', c = g();
    return n;
}
int main() {
    int N, x;
    N = readnum();
    int total = 0, ch;
    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int> > minheap;
    int min = 0, max = 0, val;
    for(int i = 0 ; i < N ; ++i) {
        ch = readnum();
        if(ch == 1) {
            x = readnum();
            if((total + 1) / 3 > min) {
                if(maxheap.top() < x) {
                    minheap.push(x);
                }
                else {
                    val = maxheap.top();
                    maxheap.pop();
                    maxheap.push(x);
                    minheap.push(val);
                }
                min++;
            }
            else if(min && minheap.top() < x) {
                val = minheap.top();
                minheap.pop();
                minheap.push(x);
                maxheap.push(val);
            }
            else {
                maxheap.push(x);
            }
            total++;
        }
        else {
            if(min)
                printf("%d\n", minheap.top());
            else
                printf("No reviews yet\n");
        }
    }
    return 0;
}
