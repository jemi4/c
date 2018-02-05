#include <stdio.h>
#include <string.h>
void main()
{
   clrscr();
    char str[50];
    int i=0,chr=0;
    printf("\nEnter Your String: ");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            chr++;
        }
        else
            chr++;
        i++;
    }
    printf("\nNumber of characters: %d", chr);
    getch();
}
