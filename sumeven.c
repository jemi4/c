#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the num a=");
	scanf("%d",&a);
	printf("enter the num b=");
	scanf("%d",&b);
	c=a+b;
	printf("the sum is=");
	scanf("%d",&c);
	if(c%2==0)
	{
		printf("the given number is even");
	}
	else
	{
		printf("the given number is odd");
		
	}
	return 0;
}
