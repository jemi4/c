#include<stdio.h>
int main()
{
char a[50];
int i,l;
printf("enter the string\n");
scanf("%s",&a);
l=strlen(a[i]);
for(i=0;i<l;i=i+2)
{
printf("%c",a[i]);
}
for(i=1;i<l;i=i+2)
{
printf("%c",a[i]);
}
return 0;
}
