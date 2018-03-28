#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char in1[100],in2[100];
  clrscr();
	scanf("%s %s",in1,in2);
	int p,k,i,j,u,v,w,x,y,z,flag=0;
	p=strlen(in1);
	k=strlen(in2);
	if(p==k)
	{
	for(i=0;i<p;i++)
	{
		for(j=i+1;j<p;j++)
		{
			u=in1[i];
			v=in1[j];
			w=in2[i];
			x=in2[j];
			y=u-v;
			z=w-x;
			if(y==z)
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	}
	else
	{
		printf("no");
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
getch();
}
