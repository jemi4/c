#include<stdio.h>
#include<conio.h>
void main()
{
  char a[50];
  int n,i,count=0;
  clrscr();
  printf("Enter the sting:");
  scanf("%s",a);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
    if(a[i]=='0'||a[i]=='1')
    {
      count++;
    }
  }
   if(count==l)
   {
    printf("YES");
   }
   else
   {
     printf("No");
   }
  getch();
}
