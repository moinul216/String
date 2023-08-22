#include <stdio.h>

int main()
{
    char str[100];
    gets(str);

    int sum = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == '1')
        {
            sum += 1;
        }

        else if (str[i] == '2')
        {
            sum += 2;
        }

        else if (str[i] == '3')
        { 
            sum += 3;
        }

        else if (str[i] == '4')
        {
            sum += 4;
        }

        else if (str[i] == '5')
        {
            sum += 5;
        }

        else if (str[i] == '6')
        {
            sum += 6;
        }

        else if (str[i] == '7')
        {
            sum += 7;
        }

        else if (str[i] == '8')
        {
            sum += 8;
        }

        else if (str[i] == '9')
        {
            sum += 9;
        }
    }
    printf("%d\n", sum);
}
