#include<stdio.h>

int main()
{
    char a[100];
    gets(a);
    int count=0;

    for(int i=0; a[i] !='\0' ;i++)
    {
        count++;
    }

    printf("%d",count);
}