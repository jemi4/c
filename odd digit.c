#include<stdio.h>
#include<conio.h>
void main()
{
char a[50]="12345";
int i,l;
clrscr();
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]%2!=0)
{
printf("%c",a[i]);
}
}
getch();
}
