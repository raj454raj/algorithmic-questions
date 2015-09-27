#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int lengthOfLongestSubstring(string s) {

    string curr = "";
    int l = 0;
    int arr[256] = {0};
    int max = 0;
    string max_s = "";
    string::iterator it;
    for(int i = 0 ; i < s.size() ; ++i) {
        if(arr[s[i]] == 0) {
            curr += s[i];
            l++;
            arr[s[i]] = 1;
        }
        else {
            if(l > max) {
                max = l;
                max_s = curr;
            }
            it = find(curr.begin(), curr.end(), s[i]);
            for(string::iterator j = curr.begin() ; j != it + 1 ; ++j) {
                arr[*j] = 0;
            }
            curr.erase(curr.begin(), it + 1);
            curr += s[i];
            arr[s[i]] = 1;
            l = curr.size();
        }
    }
    if(l > max)
        max = l;
    return max;
}

int main() {
    int n;
    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s);
    return 0;
}

