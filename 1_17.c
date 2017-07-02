#include<stdio.h>
#define MAXLEN 1000

//Funtion declaration

int getline(char [],int);
void copy(char [],char []);

void main()
{
	int tot_length;
	char line[MAXLEN],longest[MAXLEN];
	while((tot_length=getline(line,MAXLEN)) > 0)
	{
		if(tot_length > 80)
		{
			copy(longest,line);
			printf("\n The line you've entered is longer than 80 characters:%s",longest);
		}
	}

}

int getline(char str[],int lim)
{
	int c,iterator;
	for(iterator = 0; ( iterator < lim - 1 ) && (c = getchar()) != EOF && c != '\n'; ++iterator)
		str[iterator] = c;
	if(c == '\n')
	{
		str[iterator] = c;
		++iterator;
	}
	str[iterator] = '\0';
	return iterator;
} 

void copy(char to[],char from[])
{
	int iterator = 0;
	while(( to[iterator] = from[iterator]) != '\0')
		++iterator;
}