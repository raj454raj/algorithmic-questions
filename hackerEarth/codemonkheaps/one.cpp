#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x, a, b, c;
    long long int pro;
    vector<int> v;
    vector<int> heap;
    vector<long long int> sum;
    scanf("%d", &n);
    int N = n;
    while(N--) {
        scanf("%d", &x);
        v.push_back(x);
    }
    for(int i = 0 ; i < n ; ++i) {
        if(i < 2) {
            heap.push_back(v[i]);
            push_heap(heap.begin(), heap.end());
            sum.push_back(-1);
        }
        else {
            heap.push_back(v[i]);
            push_heap(heap.begin(), heap.end());

            a = heap[0];
            pop_heap(heap.begin(), heap.end());
            heap.pop_back();
            b = heap[0];
            pop_heap(heap.begin(), heap.end());
            heap.pop_back();
            c = heap[0];
            pop_heap(heap.begin(), heap.end());
            heap.pop_back();
            
            heap.push_back(a);
            push_heap(heap.begin(), heap.end());
            heap.push_back(b);
            push_heap(heap.begin(), heap.end());
            heap.push_back(c);
            push_heap(heap.begin(), heap.end());
            
            pro = (long long int) a * b * c;
            sum.push_back(pro);
        }
    }
    for(int i = 0 ; i < n ; ++i)
        cout << sum[i] << endl;
    return 0;
}
