#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the num a:=");
	scanf("%d",&a);
	printf("enter the numb=");
	scanf("%d",&b);
	c=a/b;
	printf("the difference is=");
	scanf("%d",&c);
	if(c%2==0)
	{
		printf("\nthe given number is even");
	}
	else
	{
		printf("\n the given number is odd");
	}
	return 0;
}
