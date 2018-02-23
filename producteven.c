#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the number a=");
scanf("%d",&a);
printf("enter the number b=");
scanf("%d",&b);
c=a*b;
printf("the product is=");
scanf("%d",&c);
if(c%2==0)
{
printf("the product of two numbers is even",c);
}
else
{
printf("the product of two numbers is odd",c);
}
return(0);
}

