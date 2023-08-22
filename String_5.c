#include <stdio.h>

int main()
{
    char str[100];
    gets(str);
    int count =0,p,k;

    for(int i=0; str[i] !='\0'; i++)
    {
        count++;
    }
    int n = count;
    

    for(int i=0; i< n/2 ; i++)
    {
        p = str[i] ;
        k= str[count-1-i];
        str[i] = k;
        str[count-1-i]= p;

    }

    for(int i=0 ; str[i]!= '\0' ; i++)
    {
        printf("%c",str[i]);
    }
}