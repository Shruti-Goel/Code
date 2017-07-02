#include<stdio.h>

int getdata(char []);
int remove_space(char [],char []);

void main()
{
	char line[1000],arr[1000];
	if(getdata(line))
	{
		remove_space(line,arr);
		printf("\n%s",destination);
	}
}

// Takes a line of characters as input 

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

void remove_space(char line[],char destination[])
{
	int iterator1, iterator2;
	for(iterator1 = 0, iterator2 = 0;(destination[j]=line[i])!='\0' ; )						// Removes trailing spaces
	{
		if(line[iterator1] == ' ')
		{
			destination[iterator2++] = line[iterator1];
			while(line[iterator1] == ' ')
			{
				iterator1++;
			}
		}
		else
		{
			iterator1++;
			iterator2++;
		}
	}
}