#include <stdio.h>
#include <conio.h>
void main()
{
    int array[] = {15, 50, 34, 20, 10, 79, 100};
    int n; 
 
    n = sizeof(array);
    printf("Size of the given array is %d\n", n/sizeof(int));
    getch();
}
