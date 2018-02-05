#include <stdio.h>
#include <string.h>
void main()
{
    char str[50];
    int i=0, word=0;
    printf("\nEnter Your String: ");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            word++;
        }
        else
        i++;
    }
    printf("\nNumber of words: %d", word+1);
    getch();
}
