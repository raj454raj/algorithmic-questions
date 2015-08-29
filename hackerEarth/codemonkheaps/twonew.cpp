#include<bits/stdc++.h>
using namespace std;

bool comp(int a, int b) {
    return a > b;
}

int main() {
    int x, q, ch, tmp;
    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int> > minheap;
    vector<int>::iterator it;
    int count[100002] = {0};
    scanf("%d", &q);
    while(q--) {
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                scanf("%d", &x);
                count[x]++;
                minheap.push(x);
                maxheap.push(x);
                break;
            case 2:
                scanf("%d", &x);
                if(count[x] == 0)
                    cout << "-1\n";
                else
                    count[x]--;
                break;
            case 3:
                while(maxheap.size() && count[maxheap.top()] == 0) {
                    maxheap.pop();
                }
                if(maxheap.size())
                    cout << maxheap.top() << endl;
                else
                    cout << "-1\n";
                break;
            case 4:
                while(minheap.size() && count[minheap.top()] == 0) {
                    minheap.pop();
                }
                if(minheap.size())
                    cout << minheap.top() << endl;
                else
                    cout << "-1\n";
                break;
            default: break;
        }
    }
    return 0;
}
