#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s[30];
	int j,i;
	
	scanf("%s",s);
	j=strlen(s);
	if(j%2==0)
	{
		s[j/2]='*';
		s[(j/2)-1]='*';
	}
	else
	{
		s[j/2]='*';
	}
	printf("\n%s",s);
	return 0;
}
