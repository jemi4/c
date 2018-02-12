 #include<stdio.h>
 #include<conio.h>
 void main()
  {
    int sum=0,p,j;
    int i,f;
    printf("\n Enter the initial range: ");
    scanf("%d",&i);
    printf("\n Enter the final range: ");
    scanf("%d",&f);
    printf("\n Perfect numbers between the given range are: ");
    for(j= i; j<= f; j++)
    {
     p=1;
     while(p<=(j/2)
    {
     if(i % p == 0)
     sum=sum+p;
     p++;
     }
     if(sum==j)
     printf(" %d ",j);
     sum=0;
     }
     getch();
    }

 
