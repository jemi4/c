#include<stdio.h>
int main()
{
int a[10],i,j;
printf("enter the number=");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
j=a[0];
for(i=0;i<10;i++)
if(a[i]>j)
{
j=a[i];
}
printf("\nthe greatest number is=%d",j);
return 0;
}
