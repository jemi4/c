#include<stdio.h>
#include<conio.h>
void main()
{
    int gcd,n1,n2,i;
    printf("enter two numbers");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n1&&i<=n2;++i)
    {
        if(n1%i==0&&n2%i==0)
        gcd=i;
    }
    printf("gcd is %d",gcd);
    getch();
}
