#include<stdio.h>
#include<string.h>
int main() {
    int t, max, i, j, l, flag, tmp;
    int a[26];
    scanf("%d", &t);
    char str[100005];
    char newstr[100005], c, prev;
    int k;
    getchar();
    while(t--) {
        scanf("%s", str);
        l = strlen(str);
        if(l&1)
            tmp = l / 2 + 1;
        else
            tmp = l / 2;
        flag = 0;
        for(i = 0 ; i < 26 ; ++i)
            a[i] = 0;
        
        max = 0;

        for(i = 0 ; str[i] ; ++i) {
            a[str[i] - 'a']++;
            if(a[str[i] - 'a'] > tmp)
                flag = 1;
            if(a[str[i] - 'a'] > max) {
                max = a[str[i] - 'a'];
                c = str[i];
            }
        }
        if(flag) {
            printf("-1\n");
            continue;
        }
        k = 1;
        newstr[0] = c;
        prev = c;
        a[c - 'a']--;
        for(i = 1 ; str[i] ; ++i) {
            max = 0;
            for(j = 0 ; j < 26 ; j++) {
                if((char)(j + 'a') != prev) {
                    if(a[j] > max) {
                        max = a[j];
                        c = (char)('a' + j);
                    }
                }
            }
            prev = c;
            a[c - 'a']--;
            newstr[k++] = c;
        }

        newstr[k] = '\0';
        printf("%s\n", newstr);
        getchar();
    }
    return 0;
}
