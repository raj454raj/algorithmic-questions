#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int n) {
    char str[60];
    int k = 0;
    if(n < 0)
        return false;
    int N = n;
    int sum = 0;
    while(n) {
        sum = sum * 10 + n%10;
        n /= 10;
    }
    if(sum == N)
        return true;
    return false;
}

int main() {
    int n;
    scanf("%d", &n);
    if(isPalindrome(n)) {
        printf("Is Palindrome");
    }
    return 0;
}
