#include<stdio.h>
#include<string.h>
int main()
{
int n,l,x,i;
char a[100];
printf("\n enter the string:");
gets(a);
printf("\n enter the number:");
scanf("%d",&n);
l=strlen(a);
x=l-n;
for(i=x;i<l;i++)
{
printf("%c ",a[i]);
}
return 0;	
}
