#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int n, x;
    scanf("%d", &n);
    vector<int> v(n);
    for(int i = 0 ; i < n ; ++i) {
        scanf("%d", &x);
        v[i] = x;
    }
    sort(v.begin(), v.end());
    int start = 0, end = v.size() - 1;
    int count = 0;
    int prev = 0;
    while(start <= end) {
        if(v[end] == 4) {
            end--;
            count++;
        }
        else {
            if(v[start] + v[end] == 4) {
                start++;
                end--;
                count++;
            }
            else {
                if(v[start] == 1 && v[end] == 2) {
                    if(prev == 1) {
                        start++;
                        prev = 0;
                        continue;
                    }

                    start++;
                    end--;
                    count++;
                    prev = 1;
                }
                else if(v[start] == 2 && v[end] == 3) {
                    count++;
                    end--;
                    prev = 1;
                }
                else if(v[start] == 2 && v[end] == 2) {
                    start++;
                    end--;
                    count++;
                }
                else if(v[start] == 3 && v[end] == 3) {
                    count += end - start + 1;
                    break;
                }
                else {
                    if(prev == 1)
                        start++;
                    count += (end - start + 1) / 4;
                    if((end - start + 1) % 4 != 0)
                        count++;
                    break;
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}

