#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100]={"madam"};
int i,len;
int f=0;
clrscr();
len=strlen(str);
for(i=0;i<1;i++)
{
if(str[i] != str[len-i-1])
{
f=1;
break;
}
if(f)
{
printf("is not  palindrome%c",str);
}
else
{
printf("is palindrome%c",str);
}
}
getch();
}
