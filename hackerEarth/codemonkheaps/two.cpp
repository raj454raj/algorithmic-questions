#include<bits/stdc++.h>
using namespace std;

bool comp(int a, int b) {
    return a > b;
}

int main() {
    int x, q, ch, tmp;
    vector<int> minheap, maxheap;
    vector<int>::iterator it;
    int count[100002] = {0};
    scanf("%d", &q);
    while(q--) {
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                scanf("%d", &x);
                count[x]++;
                minheap.push_back(x);
                maxheap.push_back(x);
                push_heap(minheap.begin(), minheap.end(), comp);
                push_heap(maxheap.begin(), maxheap.end());
                break;
            case 2:
                scanf("%d", &x);
                if(count[x] == 0)
                    cout << "-1\n";
                else
                    count[x]--;
                break;
            case 3:
                while(count[maxheap[0]] == 0) {
                    pop_heap(maxheap.begin(), maxheap.end());
                    maxheap.pop_back();
                }
                cout << maxheap[0] << endl;
                break;
            case 4:
                while(count[minheap[0]] == 0) {
                    pop_heap(minheap.begin(), minheap.end(), comp);
                    minheap.pop_back();
                }
                cout << minheap[0] << endl;
                break;
            default: break;
        }
    }
    return 0;
}
