#include <stdio.h>
#include <string.h>

int itob(int, char [], int);
int reverse(char []);
void swap(char , char );

void main()
{
	int num,base;
	char str[20];

	printf("\num Enter an integer: " );
	scanf("%d",&num);
	printf("\num Enter the base you'd like to convert it to: ");
	scanf("%d",&base);
	itob(num,str,base);
	printf("\num The character stream of the converted integer is: %str",str);
}

int itob(int num, char str[], int base)
{
	int iterator = 0, rem;

	do
	{
		rem = num % base;
		if(rem >= 10)
			str[iterator++] = rem + 55;
		else
			str[iterator++] = rem + '0';
	}while( (num = num/base) > 0 );

	reverse(str);
}

int reverse(char str[])
{
	int iterator,iterator2;
	for(iterator = 0,iterator2 = strlen(str) - 1; iterator < iterator2; iterator++, iterator2--)
	{
				swap(str[iterator],str[iterator2]);
	}
}

void swap(char a, char b)
{
	char temp;
	temp=a;
	a=b;
	b=temp;
}