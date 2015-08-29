#include<bits/stdc++.h>
using namespace std;
class MinStack {
    private:
        stack<int> s;
        stack<int> mintillnow;
        int min;
    public:
        MinStack() {
            min = INT_MAX;
        }
        void push(int x) {
            if(s.empty()) {
                mintillnow.push(x);
                min = x;
                s.push(x);
            }
            else {
                s.push(x);
                if(x < min) {
                    min = x;
                }
                mintillnow.push(min);
            }
        }
        void pop() {
            if(!s.empty()) {
                s.pop();
                mintillnow.pop();
                if(!mintillnow.empty())
                    min = mintillnow.top();
            }
        }
        int top() {
            if(!s.empty())
                return s.top();
        }
        int getMin() {
            return mintillnow.top();
        }
};
int main() {
    MinStack M;
    M.push(2147483646);
    M.push(2147483646);
    M.push(2147483647);
    cout << M.top() << endl;
    M.pop();
    cout << M.getMin() << endl;
    M.pop();
    cout << M.getMin() << endl;
    M.pop();
    M.push(2147483647);
    cout << M.top() << endl;
    cout << M.getMin() << endl;
    M.push(-2147483648);
    cout << M.top() << endl;
    cout << M.getMin() << endl;
    M.pop();
    cout << M.getMin() << endl;

    return 0;
}
