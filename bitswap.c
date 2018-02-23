#include<stdio.h>
int main()
{
  int n,a;
  printf("Enter the number n:");
  scanf("%d",&n);
  printf("enter the number a:");
  scanf("%d",&a);
  n=n^a;
  a=n^a;
  n=n^a;
  printf("\nThe swapping of two number:%d %d",n,a);
  return 0;
}
