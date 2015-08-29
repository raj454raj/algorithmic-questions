#include<bits/stdc++.h>
using namespace std;

class Queue {
    private:
        stack<int> first, second;
    public:
        void push(int x) {
            first.push(x);
        }

        void pop(void) {
            while(!first.empty()) {
                second.push(first.top());
                first.pop();
            }
            second.pop();
            while(!second.empty()) {
                first.push(second.top());
                second.pop();
            }
        }

        int peek(void) {
            while(!first.empty()) {
                second.push(first.top());
                first.pop();
            }
            int tmp = second.top();
            while(!second.empty()) {
                first.push(second.top());
                second.pop();
            }
            return tmp;
        }
        bool empty(void) {
            return first.empty();
        }

};

int main() {
    Queue Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    cout << Q.peek() << endl;
    Q.pop();
    cout << Q.peek() << endl;
    return 0;
}
