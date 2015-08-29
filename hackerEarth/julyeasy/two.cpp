#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, n, x;
    long long int tmp;
    cin >> t;
    while(t--) {
        cin >> n;
        tmp = 0;
        int odd[100005] = {0};
        int even[100005] = {0};
        int oddsum = 0;
        int oddequal = 0, evenequal = 0;
        int evensum = 0;
        for(int i = 0 ; i < n ; i++) {
            cin >> x;
            if(x&1) {
                if(odd[x] == 0) {
                    oddsum++;
                }
                else if(odd[x] == 1)
                    oddequal++;
                odd[x]++;
            }
            else {
                if(even[x] == 0) {
                    evensum++;
                }
                else if(even[x] == 1) 
                    evenequal++;
                even[x]++;
            }
        }
        for(int i = 0 ; i < 100002 ; i++) {
            if(odd[i] > 1 && n != 2)
                tmp += (oddsum - oddequal) * (odd[i] - 1);
            if(even[i] > 1 && n != 2)
                tmp += (evensum - evenequal) * (even[i] - 1);
        }
        //        cout << tmp << endl;
        //        cout << "***********\n";
        //        cout << evensum << " "<< oddsum << endl;
        if(evensum > 1) 
            tmp += (evensum * (evensum - 1)) / 2;
        if(oddsum > 1) 
            tmp += (oddsum * (oddsum - 1)) / 2;
        cout << tmp << endl;
    }
    return 0;
}
