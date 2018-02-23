#include<stdio.h>
int main()
{
int k,i,a=1,b=1,c=0;
printf("Enter number=");
scanf("%d",&k);
printf("%d \n %d",a,b);
for(i=0;i<(k-2);i++)
{
c=a+b;
printf("\n %d",c);
a=b;b=c;
}
}
