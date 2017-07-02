#include<stdio.h>

#define TAB 4;

int getdata(char []);
int checkSpaces(char [], char[]);
int replace(char [], int, int);
int total_spaces(char [], int*, int);

void main()
{
	char line[1000], dest[1000];
	if(getline(line))
	{
		checkSpaces(line,dest);
		printf("\n%s",dest);
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

int checkSpaces(char line[], char dest[])
{
	int iterator1 = 0, iterator2 = 0, count = 0;
	while(line[iterator1] != '\0')
	{
		if(line[iterator1] == ' ')
		{
			count = total_spaces(line,&iterator1,count);
			iterator2 = replace(dest,iterator2,count);
		}
		count = 0;
		dest[iterator2] = line[iterator1];
		iterator1++;
		iterator2++;		 
	}
}

int total_spaces(char line[],int *iterator1, int count)
{
	while(line[(*iterator1)] == ' ')
	{
		(*iterator1)++;
		count++;
	}
	return count;
}

int replace(char dest[], int iterator2,int count)
{
	int tabs = 0,spaces = 0;
	for( tabs = count / TAB ; tabs > 0; tabs-- )
		dest[iterator2++] = '*';   
	for( spaces =  count % TAB ; spaces > 0; spaces-- )
		dest[iterator2++] = '#';	
	return iterator2;
}