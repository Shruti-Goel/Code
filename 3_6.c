#include <stdio.h>
#include <limits.h>
#include <string.h>

int rev(char []);
int itoa(int, char[], int);
void swap(char , char );

void main()
{
	int num, min_width;
	char str[20];
	printf("\n Enter an integer: ");
	scanf("%d",&num);
	printf("\n Enter the minimum width: ");
	scanf("%d",&min_width);
	itoa(num,str,min_width);
	printf("\n The character converted is: %s",str);
}

int itoa(int num, char str[], int min_width)
{
	int sign,iterator1 = 0;
	if((sign = num) < 0 )
	{
		if(num == INT_MIN)
			num++; 
			num = -num;
	}
	do
	{
		str[iterator1] = ( num % 10 ) + '0';
		if(-(num+1) == INT_MIN)
			str[iterator1] = str[iterator1] + 1;
		iterator1++;
	}while((num = num / 10 ) > 0);

	if(sign < 0)
		str[iterator1++] = '-';

	while((min_width--) != 0)
		str[iterator1++] = '*';				

	str[iterator1] = '\0';
	rev(str);
}

int rev(char str[])
{
	int iterator1,iterator2;
	for(iterator1 = 0,iterator2 = strlen(str) - 1; iterator1 < iterator2; iterator1++, iterator2--)
		swap(str[iterator1],str[iterator2]);
} 

void swap(char a, char b)
{

	char temp;
	temp = a;
	a = b;
	b = temp;
}