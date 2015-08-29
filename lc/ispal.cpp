#include <bits/stdc++.h>
using namespace std;
int isPalUtil(int num, int* dupNum)
{
    if (num >= 0 && num <= 9)
        return (num == (*dupNum) % 10);

    if (!isPalUtil(num/10, dupNum))
        return 0;

    *dupNum /= 10;
    return (num % 10 == (*dupNum) % 10);
}

int isPal(int num)
{
    if (num < 0)
        num = -num;
    int *dupNum = new int(num); 

    return isPalUtil(num, dupNum);
}

int main()
{
    int n = 12321;
    isPal(n)? printf("Yes\n"): printf("No\n");

    n = 12;
    isPal(n)? printf("Yes\n"): printf("No\n");

    n = 88;
    isPal(n)? printf("Yes\n"): printf("No\n");

    n = 8999;
    isPal(n)? printf("Yes\n"): printf("No\n");
    return 0;
}
