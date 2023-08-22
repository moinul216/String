#include <stdio.h>

int main()
{
    char str[100];
    gets(str);
    int n = 0,k=0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        n++;
    }
    int m=n;
    for(int i=0; i<n/2; i++)
    {
        if(str[i]!= str[m-1-i])
        {
            printf("no");
            k++;
            break;
        }
    }

    if(k!= 1)
    {
        printf("yes");
    }
}