#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
char* longestPalindrome(char *s)

{

    int n = strlen(s); 

    bool table[n][n];

    char *newstr = (char *)malloc((n+2) * sizeof(char));

    memset(table, 0, sizeof(table));



    int maxLength = 1;

    int i;

    for (i = 0; i < n; ++i)

        table[i][i] = true;



    int start = 0;

    for (i = 0; i < n-1; ++i)

    {

        if (s[i] == s[i+1])

        {

            table[i][i+1] = true;

            start = i;

            maxLength = 2;

        }

    }



    int k;

    for (k = 3; k <= n; ++k)

    {

        for (i = 0; i < n-k+1 ; ++i)

        {

            int j = i + k - 1;



            if (table[i+1][j-1] && s[i] == s[j])

            {

                table[i][j] = true;



                if (k > maxLength)

                {

                    start = i;

                    maxLength = k;

                }

            }

        }

    }





    strncpy(newstr, s + start, maxLength);

    return newstr; 

}
int main() {
    char s[] = "dddddddd";
    printf("%s\n", s);
    printf("%s\n", longestPalindrome(s));
    return 0;
}
