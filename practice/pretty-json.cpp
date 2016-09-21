/* raj454raj */
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define si(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define pi(x) printf("%d\n",x)
#define pll(x) printf("%lld\n",x)
#define fi(i,a,b) for(int i=a;i<b;i++)
#define fe(i,a,b) for(int i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
#define LET(x,a) __typeof(a) x(a)
#define TR(v,it) for( LET(it,v.begin()) ; it != v.end(); it++)
#define SET(a,b) memset(a,b,sizeof(a))
#define sortv(a) sort(a.begin(),a.end())
#define all(a) a.begin(),a.end()
const int M = 1000000007;

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector< pii > vpii;

void print(vector<string>& res) {
    for(int i = 0; i < res.size() ; ++i) {
        cout << res[i] << endl;
    }
    cout << "*****************************\n";
}

void recurse(string A, int start, vector<string>& res, int tabs) {
    if(start >= A.size()) return;
    while(start < A.size() && A[start] == ' ') start++;
    string tabbing = "", less_tabbing = "";
    for(int i = 0 ; i < tabs ; ++i) {
        tabbing += "\t";
    }

    if(A[start] == '{' || A[start] == '[') {
        res.push_back(tabbing + A[start]);
        recurse(A, start + 1, res, tabs + 1);
        return;
    }
    else if(A[start] == '}' || A[start] == ']') {

        int tmp = start + 1;
        string tmpstring = tabbing + A[start];
        if(tmp < A.size() - 1) {
            if(A[tmp] == ',') {
                res.push_back(tmpstring + ",");
                recurse(A, tmp + 1, res, tabs);
                return;
            }
            else {
                res.push_back(tmpstring);
                recurse(A, start + 1, res, tabs - 1);
                return;
            }
        }
        else {
            res.push_back(tmpstring);
            recurse(A, start + 1, res, tabs - 1);
            return;
        }
    }
    else {
        string s = "";
        int flag = 0;


        for(int i = start ; i < A.size() ; ++i) {
            if(A[i] == ' ') continue;
            if(flag) {
                recurse(A, i + 1, res, tabs + 1);
                return;
            }
            if(A[i] == ',' || A[i] == ':') {
                if(A[i] == ':') {
                    if(i + 1 < A.size() && (A[i + 1] != '[' && A[i + 1] != '{')) {
                        s += A[i];
                        continue;
                    }
                }
                flag = 1;
                s += A[i];
                res.push_back(tabbing + s);
                recurse(A, i + 1, res, tabs);
                return;
            }
            if(A[i] == ']' || A[i] == '}') {
                res.push_back(tabbing + s);
                recurse(A, i, res, tabs - 1);
                return;
            }
            s += A[i];
        }
    }
}

vector<string> prettyJSON(string A) {
    vector<string> res;
    recurse(A, 0, res, 0);
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string str;
//    str = "{A:\"B\",C:{D:\"E\",F:{G:\"H\",I:\"J\"}}}";
//    str = "[\"foo\", {\"bar\":[\"baz\",null,1.0,2]}]";
//    str = "[\"a\":{\"hello\":\"world\"},[1,2,3,4.0]]";
    str = "{\"id\":100,\"firstName\":\"Jack\",\"lastName\":\"Jones\",\"age\":12}";
    vector<string> res = prettyJSON(str);
    print(res);
    return 0;
}

