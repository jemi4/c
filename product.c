#include<stdio.h>
#include<conio.h>
void main()
{
int rem,pro=1,n;
clrscr();
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
pro=pro*rem;
n=n/10;
}
printf("product:%d",pro);
getch();
}
