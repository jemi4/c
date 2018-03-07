#include <stdio.h>
#include<conio.h>
void main()
{
int num, count, isprime = 0;
clrscr();
printf("Enter the positive integer to check for prime or composite\n");
scanf("%d",&num);
for(count = 2; count <= number/2; count++)
{
if( (num % count) == 0 )
{
isprime = 1;
break;
}
}
if(isprime == 0)
{
printf("%d is a prime number",num);
}
else
{
printf("%d is a composite number",numb);
}
getch();
}
