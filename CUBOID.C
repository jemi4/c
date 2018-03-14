#include <stdio.h>
#include<conio.h>
void main() 
{
	int l,b,h,volume,surfarea;
  clrscr();
	scanf("%d %d %d",&l,&b,&h);
	volume=l*b*h;
	surfarea=((l*b)+(b*h)+(h*l));
	printf("%d\n",volume);
	printf("%d",surfarea);
	getch();
}
