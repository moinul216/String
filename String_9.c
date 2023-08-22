#include <stdio.h>

int main()
{
    char str[100], n, m;
    gets(str);
    scanf("%c", &n);
    int count = 0;
    if (n >= 'a' && n <= 'z')
    {
        m = n - ('a' - 'A');
    }

    else if (n >= 'A' && n <= 'Z')
    {  
        m = n + ('a' - 'A');
    }
    printf("%c",n);
    printf("%c",m);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == n || str[i] == m)
        {
            count++;
        }
    }

    printf("%d",count);
}