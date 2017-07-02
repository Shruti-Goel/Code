#include<stdio.h>
#define MAXLEN 1000

int getline(char [],int);
void copy(char [],char []);

void main()
{
	char line[MAXLEN],longest[MAXLEN];	
	int max_size = 0,iterator = 0,arr[1000],tot_length;
	while((tot_length = getline(line,MAXLEN)) > 0)
	{
		arr[iterator++] = tot_length;
		if(tot_length > max_size)
		{
			max_size = tot_length;
			copy(longest,line);
		}
		if( max_size > 0 )
		{
			while( iterator-- > 0 )
			printf("\n Length of arbitrary line %d : %d",iterator+1,arr[iterator]);
			printf("\n Longest : %s",longest);
		}
	}
}

int getline(char str[],int lim)
{
	int c ,iterator;
	for(iterator = 0; (iterator < lim - 1) && (c = getchar()) != EOF && c != '\n'; ++iterator )
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
	while(( to[iterator] = from[iterator]) != '\0' )
		++iterator;
}