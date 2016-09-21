/*
Written by :  Sikander Sharda

Creation Date : 11-08-2016

Last Modified : Thu 11 Aug 2016 10:31:53 PM IST
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<double, double> PII;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof(c).begin() i = (c).begin(); i != (c).end(); i++)
#define fi(i,a,b) for(typeof(b) i=a;i<b;i++)
#define fd(i,a,b) for(typeof(a) i=a;i>=b;i--)
#define ff first
#define ss second
#define mp make_pair

void optimizeIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool pairCompare(const PII& firstElem, const PII& secondElem) {
      return ((firstElem.first/firstElem.ss) < (secondElem.first/secondElem.ss));

}
int main()
{
    optimizeIO();
    double a, b;
    cin>>a>>b;
    int n;
    cin>>n;
    vector<pair<double, double> > v(n, mp(0,0));
    cout << fixed;
    fi(i, 0, n)
    {
        double x,y, z;
        cin>>x>>y>>z;
        v[i].ff = sqrt((a-x)*(a-x)+(b-y)*(b-y));
        v[i].ss = z;
    }
    sort(all(v), pairCompare);
    double t = v[0].ff/v[0].ss;
    cout << setprecision(12) << t << endl;
    return 0;
}
