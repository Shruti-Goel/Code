#include<stdio.h>

void main()
{
	char character;
	while((character = getchar())!= EOF)
	{
		if( character == '\n' || character == ' ' || character == '\t' )
			printf("\n");
		else
			printf("%c",character);
	}
}