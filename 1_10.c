#include<stdio.h>
int main(int argc, char const *argv[])
{
	char character;
	while(( character = getchar())!= EOF)
	{
		if( character == '\t')
			printf("\\t");
		else if( character == ' ')
			printf("\\b");
	    else if(character == '\\')
			printf("\\");
		else
			printf("%c",character);
	}
	return 0;
}