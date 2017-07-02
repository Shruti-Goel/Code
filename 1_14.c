#include<stdio.h>	
void main()
{
	char ch;
	int arr[127],iterator,j;
	for(iterator = 0; iterator < 127; iterator++)
		arr[iterator] = 0;
	while((ch=getchar())!=EOF)
		arr[ch]++;
	for(iterator = 0; iterator < 127 ; iterator++)
	{
		printf("%c",iterator);
		for(j = 0; j < arr[iterator]; j++)
			printf("*");
		printf("\n");
	}
}