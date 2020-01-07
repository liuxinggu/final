#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    char t[50];
    int i = 0;

    while ((s[i] = getchar()) != '\n')
    {
        i++;
    }
    int j = i - 1;
    int k = 0;
    while (j >= 0)
    {
        t[k] = s[j];
        k++;
        j--;
    }

    printf("%s\n", t);
}