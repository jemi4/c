#include<stdio.h>
int main()
{
int a,i,flag=0;
char s[50];
gets(s);
a=strlen(s);
for(i=0;i<a;i++)
{
if(s[i]==s[i+1])
{
flag=1;
break;
}
}
if(flag==1)
{
printf("not isogram");
}
else
{
printf("isogram");
}
return 0;
}
