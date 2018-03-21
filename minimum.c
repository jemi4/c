#include <stdio.h>
#include<conio.h>
void main()
{
int a,b[a],i,max;
clrscr();
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
if(i==0)
max=b[i];
if(max<b[i])
max=b[i];
}
printf("%d",max);
getch();
}
