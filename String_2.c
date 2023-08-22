#include <stdio.h>

int main()
{
    int i=0, j=0;
    char s1[100],s2[100];
    gets(s1);
    gets(s2);

    for( i=0; s1[i]!='\0';i++)
    {

    }
    for(j=0; s2[j]!='\0'; j++)
    {
        s1[i]=s2[j];
        i++;
    }
    s1[i] = '\0';
    //puts(s1);

    printf("%s",s1);
}
