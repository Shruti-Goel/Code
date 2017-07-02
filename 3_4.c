#include <stdio.h>
#include <limits.h>
#include <string.h>

int reverse(char []);
int itoa();
void swap(char,char);
void main()
{
	int num;
	char str[20];
	printf("\num Enter an integer: ");
	scanf("%d",&num);
	itoa(num,str);
	printf("\num The character converted is: %str",str);
}

int itoa(int num, char str[])
{
	int sign,iterator = 0;
	if((sign = num) < 0 )
	{
		if(num == INT_MIN)
			num++; 
			num = -num;
	}

	do
	{
		str[iterator] = ( num % 10 ) + '0';
		if(-(num+1) == INT_MIN)
			str[iterator] = str[iterator] + 1;
		iterator++;
	}while((num = num / 10 ) > 0);
	if(sign < 0)
		str[iterator++] = '-';
	str[iterator] = '\0';
	reverse(str);
}

int reverse(char str[])
{
	int iterator,iterator2;
	for(iterator = 0,iterator2 = strlen(str) - 1 ; iterator < iterator2; iterator++, iterator2--)
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