#include <stdio.h>

#define LINE 1000

int getdata(char []);
int escape(char [],char []);
int replace_escape(char [], char[]);

void main()
{
	char line[LINE],dest[LINE],replace_line[LINE];
	if(getdata(line))
	{
		printf("\n ENTER TEXT WITH ESCAPE SEQUENCES: \n\n ");

		escape(line,dest);

		printf("%s\n",dest );

		printf("\n REDIRECTED TEXT: \n\n ");

		replace_escape(dest,replace_line);

		printf("%s\n", replace_line);
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

int escape(char line[], char dest[])
{
	int line_offset = 0, newline_offset = 0;
	while(line[line_offset] != '\0')
	{
		switch(line[line_offset])
		{
			case '\n' : dest[newline_offset] = '\\';
						newline_offset++;
						dest[newline_offset] = 'n';
						break;

			case '\t' : dest[newline_offset] = '\\';
						newline_offset++;
						dest[newline_offset] = 't';
						break;

			default   : dest[newline_offset] = line[line_offset];
						break;
		}
		newline_offset++; line_offset++;
	}

	dest[newline_offset] = '\0';
}

int replace_escape(char dest[], char replace_line[])
{
	int newline_offset = 0, redirection_line_index = 0;
	while(dest[newline_offset] != '\0')
	{
		if(dest[newline_offset] == '\\')
		{
			newline_offset++;
			switch(dest[newline_offset])
			{
				case 'n' : replace_line[redirection_line_index] = '\n';
							redirection_line_index++; newline_offset++;
							break;
				case 't' : replace_line[redirection_line_index] = '\t';
						redirection_line_index++; newline_offset++;
							break;
			}
		}
		replace_line[redirection_line_index] = dest[newline_offset];
		redirection_line_index++; newline_offset++;
	}
}