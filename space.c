#include<stdio.h>
#include<stdlib.h>
 void main()
{   fopen(fp);
    FILE *fp;
    char ch;
    int  space = 0;
    if(fp == NULL)
    {
        printf("File Not Found\n");
        exit(1);
    }
    else
    {
        while(1)
        {
            ch = fgetc(fp);
            if(ch == EOF)   
            {
                break;
            }
            character++;
            if(ch == ' ')
                space++;
        }
    }
    fclose(fp);
    printf("\nNumber of Characters = %d\n", character); 
}

   
