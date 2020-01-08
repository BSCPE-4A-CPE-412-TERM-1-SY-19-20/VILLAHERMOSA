
/*217156*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[100];
	int i=0, count=0,a,b;
	
	printf("enter the string: ");
	gets(str);
	count=0;
	
	b=strlen(str);
	for(a=0; a<=b; a++)
	{
		if(str[a]=='a'||str[a]=='b')
		{
			if(str[a]=='b')
			{
				count++;
			}
		}
	}
	if(count>=5)
	{
		printf("accepted\n");
	}
	else
	{
		printf("not accepted");
	}
	return 0;
}