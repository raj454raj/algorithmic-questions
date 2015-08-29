#include <bits/stdc++.h>
using namespace std;

int main()
{
        set<long int> myset;
            long int n,k,a,b,i;
                cin>>n>>k;
                    for(i=1;i<=n;i++)
                            myset.insert(i);
                        for(i=0;i<k;i++)
                                {
                                            cin>>a>>b;
                                                    myset.erase(b);
                                                        }
                            cout<<myset.size();
                                return 0;
}

