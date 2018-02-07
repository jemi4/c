#include <stdio.h>
int main()
{
    char    str[100];
    int countSpecialChar;
    int counter;
    countSpecialChar;
     printf("Enter a string: ");
    gets(str);
 
    for(counter=0;str[counter]!=NULL;counter++)
    {
 
        if(str[counter]>='0' && str[counter]<='9')
            countSpecialChar++;
    }
 
    printf(Special Characters:countSpecialChar);
    return 0;
}
