#include<stdio.h>

int getdata(char []);
int reverseString(char [],char [],int);

void main()
{
	char str[1000], rev[1000];
	int length;
	if(length = getdata(str))
	{
		reverseString(str,rev,( length - 2 ));
		printf("%s\n",rev);
	}
	else
		printf("\nEmpty String \n");
}

// Reverses the string 

int reverseString(char str[], char rev[], int length)
{
	int iterator;
	for(iterator = 0; (str[iterator] != '\0'; iterator++)
		rev[length--] = str[iterator];
}


// Takes a line of characters/string as input 

int getdata(char line[])
{
	char ch;
	for(int iterator= 0; (ch = getchar()) != EOF && ch!='\n' ; iterator++)
		line[iterator] = ch;

	if(ch == '\n')
	{
		line[iterator++] = ch;
	}

	line[iterator] = '\0';
	return iterator;
}

