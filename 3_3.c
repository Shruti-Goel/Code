#include <stdio.h>

#define SIZE 10000

int getdata(char []);
int expand(char [], char[]);
int expander(char [], char[], int *, int *);

void main()
{
	char line[SIZE], dest[SIZE];

	getdata(line);
	expand(line,dest);

	printf("%s\n",dest );
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

int expand(char line[], char dest[])
{
	int line_offset = 0, newline_offset = 0;
	while(line[line_offset] != '\0')
	{
		switch(line[line_offset])
		{
			case '-' : if(line[line_offset - 1] >= 'a' && line[line_offset + 1] <= 'z') 
							expander(line, dest, &line_offset, &newline_offset);
						else if(line[line_offset - 1] >= '0' && line[line_offset + 1] <= '9')
							expander(line, dest, &line_offset, &newline_offset);
						else
							;
			default  : dest[newline_offset] = line[line_offset];
									break;
		}
		line_offset++; newline_offset++;
	}
	return 0;
}

int expander(char line[], char dest[], int *line_offset, int *newline_offset)
{
	char ch;
	{	
		for(ch = (line[(*line_offset) - 1]) + 1 ; ch <= line[(*line_offset) + 1] ; ch++)
			{	
				dest[(*newline_offset)] = ch;
				(*newline_offset)++;
			}
	}
	(*line_offset) = (*line_offset) + 2;
}