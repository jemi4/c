#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,count=0;
  clrscr();
scanf("%d",&a);
for(i=1;i<=a;i++)
if(a%i==0)
printf("%d\t",i);
getch();
}
