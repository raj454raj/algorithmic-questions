#include<bits/stdc++.h>
#define ll long long int
using namespace std;
class TrieNode {
    public:
        char c;
        bool is_ending;
        TrieNode *children[26];
        TrieNode(char val, bool ending=false) {
            c = val;
            is_ending = ending;
            for(int i = 0 ; i < 26 ; ++i) {
                children[i] = NULL;
            }
        }
        void printChildren() {
            for(int i = 0 ; i < 26 ; ++i) {
                if(children[i]) {
                    cout << (char)(i + 'a');
                }
            }
            cout << endl;
        }

};

class Trie {
    public:
        Trie() {
            root = new TrieNode('-', true);
        }
        ~Trie() {
            delete root;
        }
        void insert(string word) {
            TrieNode *curr = root;
            for(int i = 0 ; i < word.size() ; ++i) {
                if(curr->children[word[i] - 'a'] == NULL)
                    curr->children[word[i] - 'a'] = new TrieNode(word[i]);
                if(i == word.size() - 1)
                    curr->children[word[i] - 'a']->is_ending = true;
                curr = curr->children[word[i] - 'a'];
            }
        }
        // Returns if the word is in the trie.
        bool search(string word) {
            TrieNode *curr = root;
            for(int i = 0 ; i < word.size() ; ++i) {
                if(curr == NULL) {
                    cout << i;
                    return false;
                }
                if(curr->children[word[i] - 'a']) {
                    curr = curr->children[word[i] - 'a'];
                }
                else {
                    cout << i;
                    return false;
                }
            }
            if(curr == NULL || curr->is_ending == true)
                return true;
            cout << "ending";
            return false;
        }

        bool startsWith(string prefix) {
            TrieNode *curr = root;
            for(int i = 0 ; i < prefix.size() ; ++i) {
                if(curr == NULL)
                    return false;
                if(curr->children[prefix[i] - 'a']) {
                    curr = curr->children[prefix[i] - 'a'];
                }
                else
                    return false;
            }
            return true;
        }

        TrieNode* getRoot() {
            return root;
        }

    private:
        TrieNode* root;
};

void printTrie(TrieNode* root, string s) {
    if(root) {
        if(root->c != '-')
            s += root->c;
        if(root->is_ending)
            cout << s << endl;
        for(int i = 0 ; i < 26 ; ++i) {
            if(root->children[i])
                printTrie(root->children[i], s);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    Trie trie;
    trie.insert("hellothere");
    trie.insert("hello");
    trie.insert("oyeah");
    trie.insert("ono");
            trie.insert("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
    cout << trie.search("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
    return 0;
}
