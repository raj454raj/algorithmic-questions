#include<bits/stdc++.h>
using namespace std;
    void reverseWords(string &A) 
    {
        int i;
        int n=A.length();
        string s="",m="";
        for(i=0;i<n/2;i++)
        {
            char t=A[i];
            A[i]=A[n-i-1];
            A[n-i-1]=t;
        }
        string x=A+" ";
        
        int flag=0;
        for(i=0;i<n+1;i++)
        {
            if(x[i]!=' ')
            {
                s=x[i]+s;
                flag=0;
            }
     
            else if(x[i]==' '&&flag==0)
            {
                    m=m+" "+s;
                    s="";
                    flag++;
            }
        }
        //cout<<m;
     
     
        for(i=1;i<A.length()+1;i++)
            A[i-1]=m[i];
        A.resize(A.length()-1);
    }
     
int main() {
    string s = "fwbpudnbrozzifml osdt  ulc jsx kxorifrhubk ouhsuhf  sswz qfho dqmy  sn myq igjgip iwfcqq";
    reverseWords(s);
    cout << s;
    return 0;
}
