#include<bits/stdc++.h>
using namespace std;
char *dectobin(int A) {
    unsigned int tmp = (unsigned int)(A);
    char *str=(char *)malloc(1000);
    int k = 0;
    int flag=0;
    unsigned int i;
    if(tmp == 0) {
        str[k++] = '0';
        str[k] = '\0';
        return str;    
    }   
    for(i = 1 << 31 ; i > 0 ; i /= 2) {
        if(tmp & i) {
            str[k++] = '1';
            flag=1;
        }
        else if(flag)
            str[k++] = '0';
    }
    return str;
}
int main() {
    int n=1;
    char *s = dectobin(n);
    cout <<s;
    return 0;
}
