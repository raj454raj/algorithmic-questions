#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, r, k, z, I, occurrences;
    scanf("%d", &t);
    string tmp = "101";
    int count;
    while(t--) {
        scanf("%d%d", &r, &k);
        string s;
        count = 0;
        for(int i = 1 ; i <= r ; i++) {
            I = i;
            s.clear();
            while(I) {
                s.push_back((char)(I%2 + '0'));
                I /= 2;
            }
            occurrences = 0;
            string::size_type start = 0;

            while ((start = s.find(tmp, start)) != string::npos) {
                    ++occurrences;
                    start += tmp.length(); // see the note
            }
            if(occurrences >= k)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
