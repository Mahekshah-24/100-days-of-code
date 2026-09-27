Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
  #include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, start, end, j;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    for (i = 0; ; i++)
    {
        start = i;

        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            i++;
        }

        end = i - 1;

        for (j = start; j < end; j++, end--)
        {
            temp = str[j];
            str[j] = str[end];
            str[end] = temp;
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;
    }

    printf("%s", str);

    return 0;
}
