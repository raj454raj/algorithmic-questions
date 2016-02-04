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

class WordDictionary {
        TrieNode* root;
    public:
        WordDictionary() {
            root = new TrieNode('-');
        }

        // Adds a word into the data structure.
        void addWord(string word) {
            TrieNode *curr = root;
            for(int i = 0 ; i < word.size() ; ++i) {
                if(curr->children[word[i] - 'a'] == NULL)
                    curr->children[word[i] - 'a'] = new TrieNode(word[i]);
                if(i == word.size() - 1)
                    curr->children[word[i] - 'a']->is_ending = true;
                curr = curr->children[word[i] - 'a'];
            }
        }
        bool search(string word) {
            return word_search(word, root);
        }

        bool word_search(string s, TrieNode *r) {
            if(s.size() == 0 && r != NULL && r->is_ending)
                return true;
            else if(s.size() == 0 || r == NULL)
                return false;
            else {
                TrieNode *curr = r;
                for(int i = 0 ; i < s.size() ; ++i) {
                    if(curr == NULL)
                        return false;
                    if(s[i] == '.') {
                        for(int j = 0 ; j < 26 ; ++j) {
                            if(word_search(s.substr(i + 1), curr->children[j]))
                                return true;
                        }
                        return false;
                    }
                    else {
                        if(curr->children[s[i] - 'a'])
                            curr = curr->children[s[i] - 'a'];
                        else
                            return false;
                    }
                }
                if(curr == NULL || curr->is_ending == true)
                    return true;
                return false;
            }
        }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    WordDictionary w;
    w.addWord("a");
    cout << w.search(".");
    return 0;
}
