#include<bits/stdc++.h>
#define ll long long int
//#define g getchar_unlocked
using namespace std;
int LIMIT = 32;

class TrieNode {
    public:
        int cnt;
        bool isEnd;
        TrieNode *next[2];

        TrieNode() {
            cnt = 0;
            isEnd = false;
            next[0] = next[1] = NULL;
        }
};

class Trie {
    public:
        TrieNode *root;
        Trie() {
            root = new TrieNode();
        }

        void insert(int x) {
            int thisbit;
            TrieNode *curr = root;
            for(int i = LIMIT ; i > 0 ; i--) {
                thisbit = (x >> (i - 1)) & 1;
                if(curr->next[thisbit] == NULL)
                    curr->next[thisbit] = new TrieNode();
                curr = curr->next[thisbit];
            }
            curr->cnt++;
            curr->isEnd = true;
        }

        bool deleteRecursive(int x, int i, TrieNode* curr) {
            int thisbit = (x >> (i - 1)) & 1;
            if(!i) {
                if(curr->cnt > 1) {
                    curr->cnt--;
                    return false;
                }
                return true;
            }
            if(deleteRecursive(x, i - 1, curr->next[thisbit])) {
                curr->next[thisbit] = NULL;
                return curr->next[thisbit ^ 1] == NULL;
            }
            return false;
        }

        void erase(int x) {
            deleteRecursive(x, LIMIT, root);
        }

        int maxXOR(int x) {
            int thisbit;
            int res = 0;
            TrieNode *curr = root;
            for(int i = LIMIT ; i > 0 && curr ; i--) {
                thisbit = (x >> (i - 1)) & 1;
                if(curr->next[thisbit ^ 1]) {
                    res |= (1 << (i - 1));
                    curr = curr->next[thisbit ^ 1];
                }
                else
                    curr = curr->next[thisbit];
            }
            return max(res, x);
        }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, d;
    cin >> n;
    char c;
    Trie t;
    while(n--) {
        cin >> c >> d;
        switch(c) {
            case '+': {
                    t.insert(d);
                    break;
                }
            case '-': {
                    t.erase(d);
                    break;
                }
            case '?': {
                    cout << t.maxXOR(d) << endl;
                    break;
                }
            default: {
                cout << "Invalid option";
                break;
            }
        }
    }
    return 0;
}

