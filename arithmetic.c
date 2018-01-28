#include <stdio.h>
#include <stdlib.h>
 int main() 
 {
    int ft, df, terms, value, sum=0, i;
    printf("Enter the number of terms in AP series\n");
    scanf("%d", &terms);
     printf("Enter first term and common difference of AP series\n");
    scanf("%d %d", &ft, &df);
    value = ft;
    printf("AP SERIES\n");
    for(i = 0; i < terms; i++) 
    {
        printf("%d ", value);
        sum += value;
        value = value + df;
    }
     printf("\nSum of the AP series till %d terms is %d\n", terms, sum);
     getch();
 return 0;
}
