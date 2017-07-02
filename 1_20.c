#include<stdio.h>

int getdata(char []);
int checkTab(char [],char []);
int replace(char[],char [], int, int);

void main()
{
	char line[1000],dest[1000];
	if(getdata(line))
	{
		checkTab(line,dest);
		printf("%s",dest);
	}
}

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

int checkTab(char line[],char dest[])
{
	int iterator1,iterator2;
	for(iterator1 = 0, iterator2 = 0;(line[iterator1] != '\0'; iterator1++, iterator2++)
	{
		if(line[iterator1] == '\t')
		{
			iterator2 = replace(line,dest,iterator1,iterator2);
		}
		dest[iterator2] = line[iterator1];
	}
}

int replace(char line[],char dest[],int iterator1,int iterator2)
{
	int tabsize = 4, blank_spaces;
	for( blank_spaces = tabsize - ( iterator1 % tabsize ); blank_spaces > 0; blank_spaces--; )
		dest[iterator2++] = '*';
	return iterator2;
}	