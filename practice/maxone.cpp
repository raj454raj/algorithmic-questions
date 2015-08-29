#include<bits/stdc++.h>
using namespace std;
vector<int> maxOnesIndex(vector<int> &A, int B)
{
    int max_count = 0; 
    int max_index; 
    int prev_zero = -1;
    int prev_prev_zero = -1; 

    for (int curr=0; curr<B; ++curr)
    {
        if (A[curr] == 0)
        {
            if (curr - prev_prev_zero > max_count)
            {
                max_count = curr - prev_prev_zero;
                max_index = prev_zero;
            }

            prev_prev_zero = prev_zero;
            prev_zero = curr;
        }
    }

    if (B-prev_prev_zero > max_count)
        max_index = prev_zero;
    vector<int> res;
    A[max_index] = 1;
    int tmp = max_index - 1;
    while(tmp >= 0 && A[tmp] == 1) {
        tmp--;
    }
    for(int i = tmp + 1 ; i < B ; i++)  {
        if(A[i] == 0)
            break;
        res.push_back(i);
    }
    return res;
}
int main() {
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    vector<int> res = maxOnesIndex(v, 10);
    for(int i = 0 ; i < 10 ; i++)
        cout << res[i] << " ";
    return 0;
}
