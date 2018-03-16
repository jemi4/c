#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
scanf("%d",&n);
int a[n];
for(i=1;i<=n;i++)
{
    scanf("%d",&a[i]);
    if(a[i]!=i)
    {
         printf("%d\n",i);
         getch();
    }
    }
}
