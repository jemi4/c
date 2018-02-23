#include<stdio.h>
int main()
{
int a,b,t1;
printf("value of a  before swapping=");
scanf("%d",&a);
printf("value of b before swapping=");
scanf("%d",&b);
t1=a;
a=b;
b=t1;
printf("value of a and b after swapping %d%d",a,b);
return 0;
}
