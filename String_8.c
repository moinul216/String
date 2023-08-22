#include <stdio.h>
#include <math.h>

int main()
{
    char str[100];
    gets(str);

    int i, a = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        a++;
    }

    int firstN, secondN;

    for (int i = 0; i < a - 1; i++)
    {
        for (int i = 0; i < a - 1; i++)
        {
            if (str[i] > str[i + 1])
            {
                firstN = str[i];
                secondN = str[i + 1];
                str[i] = secondN;
                str[i + 1] = firstN;
            }
        }
    }

    printf("%s\n", str);
}