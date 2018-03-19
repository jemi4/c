#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char j[100];
int n,i;
clrscr();
printf("\n enter the string:");
gets(j);
n=strlen(j);
for(i=0;i<n;i++)
{
if(j[i]==' ')
{
j[i+1]-=32;	
}
}
j[0]-=32;
printf("%s",j);
getch();	
}
