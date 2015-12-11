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
class MedianFinder {
    private:
        // Max heap
        priority_queue<int> Q;
        // Min heap
        priority_queue<int, vector<int>, greater<int> > q;
        int n;
    public:
        MedianFinder() {
            n = 0;
        }
        // Adds a number into the data structure.
        void addNum(int num) {
            n++;
            int Qsize = Q.size(), qsize = q.size();
            if(Qsize <= qsize) {
                if(!q.empty()) {
                    if(num > q.top()) {
                        Q.push(q.top());
                        q.pop();
                        q.push(num);
                    }
                    else
                        Q.push(num);
                }
                else
                    Q.push(num);
            }
            else {
                if(!Q.empty()) {
                    if(num < Q.top()) {
                        q.push(Q.top());
                        Q.pop();
                        Q.push(num);
                    }
                    else
                        q.push(num);
                }
                else
                    q.push(num);
            }
        }
        // Returns the median of current data stream
        double findMedian() {
            if(n&1)
                return (double)Q.top();
            else
                return (double)(Q.top() + q.top()) / 2.0;
        }
};

int main() {
    ios_base::sync_with_stdio(0);
    MedianFinder M;
    M.addNum(1);
    M.addNum(2);
    cout << M.findMedian() << endl;
    M.addNum(5);
    cout << M.findMedian() << endl;
    M.addNum(3);
    cout << M.findMedian() << endl;
    return 0;
}
