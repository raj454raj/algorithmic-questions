#include<stdio.h>
#include<stdbool.h>
char stack[100000];
int top = -1;
void push(char c) {
    top++;
    stack[top] = c;
}

char pop() {
    char c = stack[top];
    top--;
    return c;
}

bool isValid(char* s) {
    int i;
    for(i = 0 ; s[i] ; i++) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') 
            push(s[i]);
        else if(s[i] == ')') {
            if(top == -1)
                return false;
            if (pop() != '(')
                return false;
        }

        else if(s[i] == '}') {
            if(top == -1)
                return false;
            if (pop() != '{')
                return false;
        }

        else if(s[i] == ']') {
            if(top == -1)
                return false;
            if (pop() != '[')
                return false;
        }
    }
    if(top == -1)
        return true;
    return false;
}

int main() {
    char str[100000];
    scanf("%s", str);
    if(isValid("]"))
        printf("Is Valid"); 
    return 0;
}
