#include <stdio.h>

int main()
{
    char str[100];
    char str2[50];

    gets(str);
    gets(str2);
    int count = 0, n = 0;

    for (int i = 0; str2[i] != '\0'; i++)
    {
        count++;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == str2[0])
        {
            for (int j = 0; j <=count; j++)
            {
                if (str[i + j] == str2[j])
                {
                    if (str[i + count] == str[count])
                    {
                        n++;
                    }
                }
            }
        }
    }

    printf("%d", n);
}