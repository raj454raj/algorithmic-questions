#include<stdio.h>
#include<stdbool.h>
bool isAlphaNumeric(char c) {
    if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return true;
    return false;
}
char *toLower(char *s) {
    int i;
    for(i = 0 ; s[i] ; i++)
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    return s;
}

bool isPalindrome(char* s) {
    toLower(s);
    int i = 0;
    int l = strlen(s);
    int front = 0, rear = l - 1;
    while(1) {
        if(front > rear)
            break;
        if(isAlphaNumeric(s[front]) && isAlphaNumeric(s[rear])) {
            if(s[front] != s[rear])
                return false;
            front++;
            rear--;
        }
        else if(isAlphaNumeric(s[front]))
            rear--;
        else if(isAlphaNumeric(s[rear]))
            front++;
        else {
            front++;
            rear--;
        }
    }
    return true;
}

int main() {
    char str[500000];
    scanf("%[^\n]", str);
    if(isPalindrome(str)) {
       printf("ads");
    }
    return 0;
}
