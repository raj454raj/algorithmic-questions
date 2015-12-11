#include<bits/stdc++.h>
#define ll long long int
using namespace std;
class LRUCache {
    private:
        list< pair<int, int> > l;
        // key -> iterator -> (key, value)
        unordered_map<int, list< pair<int, int> >::iterator > m;
        int n;

    public:
        LRUCache(int capacity) : n(capacity) {
        }

        int get(int key) {

            unordered_map<int, list< pair<int, int> >::iterator >::iterator it = m.find(key);
            if(it != m.end()) {
                /* Element in cache */
                int value = it->second->second;
                l.erase(it->second);
                l.push_front(make_pair(key, value));
                m[key] = l.begin();
                return value;
            }
            else {
                /* Element not in cache */
                return -1;
            }
        }

        void set(int key, int value) {
            int k = l.size();
            unordered_map<int, list< pair<int, int> >::iterator >::iterator it = m.find(key);
            if(it != m.end()) {
                /* Element already in the queue/cache */
                if(k < n) {
                    l.erase(it->second);
                    l.push_front(make_pair(key, value));
                    m[key] = l.begin();
                }
                else {
                    l.erase(it->second);
                    l.push_front(make_pair(key, value));
                    m[key] = l.begin();
                }

            }
            else {
                /* Element not in cache */
                if(k < n) {
                    /* Insert in the list normally */
                    l.push_front(make_pair(key, value));
                    m[key] = l.begin();
                }
                else {
                    /* Replace the least recently used element */
                    list<pair<int, int> >::iterator t = l.end();
                    --t;
                    m.erase(t->first);
                    l.pop_back();
                    l.push_front(make_pair(key, value));
                    m[key] = l.begin();
                }
            }

        }

        void print() {
            list<pair<int, int> >::iterator it;
            for(it = l.begin() ; it != l.end() ; ++it) {
                cout << it->first << " ";
            }
            cout << endl;
        }
};
int main() {
    ios_base::sync_with_stdio(0);
    LRUCache L(5);
    L.set(4, 4);
    L.print();
    cout << L.get(3) << endl;
    L.set(3, 4);
    L.print();
    L.set(2, 4);
    cout << L.get(3) << endl;
    L.print();
    L.set(1, 4);
    L.print();
    L.set(3, 4);
    L.print();
    L.set(2, 4);
    L.print();
    L.set(4, 4);
    L.print();
    L.set(5, 4);
    L.print();
    L.set(6, 4);
    L.print();
    L.set(2, 4);
    L.print();
    L.set(3, 4);
    L.print();
    L.set(1, 4);
    L.print();

    return 0;
}

