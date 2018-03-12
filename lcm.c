# include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the values");
scanf("%d%d",&a,&b);
c=(a>b)?a:b;
if((c%a==0)&&(c%b==0))
{
printf("the lcm value is%d",c);
}
getch();
}
