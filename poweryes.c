#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
bool isPowerOfTwo(int n)
{
   return (ceil(log2(n)) == floor(log2(n)));
}
int main()
{
    isPowerOfTwo(31)? printf("Yes\n"): printf("No\n");
    isPowerOfTwo(64)? printf("Yes\n"): printf("No\n");
    return 0;
}
