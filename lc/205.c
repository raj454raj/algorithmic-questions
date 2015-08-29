#include<stdio.h>
#include<stdbool.h>
char arr[256];
int bitmap[256];
bool isIsomorphic(char *s, char *t) {
    int i;
    for(i = 0 ; i < 256 ; i++) {
        arr[i] = ' ';
        bitmap[i] = 0;
    }
    for(i = 0 ; s[i] ; i++) {
        if(arr[s[i]] == ' ') {
            arr[s[i]] = t[i];
            if(bitmap[t[i]])
                return false;
            bitmap[t[i]] = 1;
        }
        else {
            if(arr[s[i]] != t[i])
                return false;
        }
    }
    return true;
}

int main() {
    char s[500000], t[500000];
    scanf("%s %s",s, t);
    if(isIsomorphic(s, t))
        printf("is isomorphic");
    else
        printf("not isomorphic");
    return 0;
}
