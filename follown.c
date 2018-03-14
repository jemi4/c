#include <stdio.h>
#include<conio.h>
void main() 
{
	int a[4],sum=0,i;
  clrscr();
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
	sum=sum+a[i];
	}
	printf("%d",sum);
  {
	getch();
}
}
