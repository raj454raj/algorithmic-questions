#include<bits/stdc++.h>
using namespace std;

class TrieNode {
    public:
    int flag;
    char val;
    TrieNode *child[26];
        TrieNode(char c): val(c) {
            flag = 0;
            for(int i = 0 ; i < 26 ; i++) {
                child[i] = NULL;
            }
        }
};

class Trie {
    public:
        Trie() {
            root = new TrieNode('_');
        }

        // Inserts a word into the trie.
        void insert(string word) {
            TrieNode *tmp = root;
            for(string::iterator it = word.begin() ; it != word.end() ; ++it) {
                if(tmp->child[*it - 'a'] == NULL) {
                    if(tmp->flag == 0)
                        tmp->flag = 1;
                    tmp->child[*it - 'a'] = new TrieNode(*it);
                    tmp = tmp->child[*it - 'a'];
                }
                else {
                    tmp = tmp->child[*it - 'a'];
                }
            }
            tmp->flag = 2;
        }
        // Returns if the word is in the trie.
        bool search(string word) {
            TrieNode* tmp = root;
            for(string::iterator it = word.begin() ; it != word.end() ; ++it) {
                if(tmp->child[*it - 'a'] == NULL)
                    return false;
                else {
                    tmp = tmp->child[*it - 'a'];
                }
            }
            if(tmp->flag != 2)
                return false;
            return true;
        }
        // Returns if there is any word in the trie
        // that starts with the given prefix.
        bool startsWith(string prefix) {
            TrieNode* tmp = root;

            for(string::iterator it = prefix.begin() ; it != prefix.end() ; ++it) {
                if(tmp->child[*it - 'a'] == NULL || tmp->child[*it - 'a']->val != *it)
                    return false;
                else
                    tmp = tmp->child[*it - 'a'];
            }
            return true;
        }



    private:

        TrieNode* root;

};

int main() {
    Trie t;/*
    t.insert("hell");
    t.insert("hello");
    t.insert("yo");
    t.insert("yolo");
    t.insert("has");
    t.insert("had");
    cout << "ha"<<t.search("ha")<<endl;
    cout << "has"<<t.search("has")<<endl;
    cout << "had"<<t.search("had")<<endl;
    cout << "hell"<<t.search("hell")<<endl;
    cout << "hello"<<t.search("hello")<<endl;
    cout << "yo"<<t.search("yo")<<endl;
    cout << "yolo"<<t.search("yolo")<<endl;
    cout << "y"<<t.search("y")<<endl;
    cout << "pre y " << t.startsWith("y");
    cout << "pre yo " << t.startsWith("yo");
    cout << "pre yol " << t.startsWith("yo");
    cout << "pre h " << t.startsWith("h");
    cout << "pre z " << t.startsWith("z");
*/
    return 0;
}
