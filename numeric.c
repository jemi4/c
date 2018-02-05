#include <stdio.h>
{
	int i=0;
    while (*(num+i))
    {
        if (*(num+i) >= '0' && *(num+i) <= '9')
            i++;
        else
            return 0;
    }
    return 1;
}
void main()
{
	int ret = 0;
  ret = isNumericString(str1);
	if(ret)
		printf("It is numeric string");
	else
		printf("It is not numeric string");
	if(ret)
		printf("It is numeric string");
	else
		printf("It is not numeric string");
    return(0);
}
