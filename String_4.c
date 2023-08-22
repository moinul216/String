#include<stdio.h>

int main()
{
    char a[100];
    gets(a);
    int count =1;

    for(int i=0; a[i]!='\0';i++ )
    {
        if(a[i]==' ')
        {
            count++;
        }
    }
    printf("%d",count);
}