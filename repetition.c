#include <stdio.h>
#include<conio.h>
void main()
{
	int n,m,i,count=0;
	scanf("%d %d",&n,&m);
	int a[10];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			
			count=count+1;
		
		}
		
	}
	printf("%d",count);
	getch();
}