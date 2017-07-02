#include <stdio.h>

#define SIZE 15

void populate_array(int []);
void sort(int []);
int binary_search(int [],int *);
void swap(int,int);

void main()
{
	int arr[SIZE],SIZE,iterator;
	populate_array(arr);
	sort(arr);
	if (iterator = binary_search(arr, &SIZE))
		printf("\n\n Element found at position %d ",iterator);
	else
		printf("\n Element not found");
}

void populate_array(int arr[])
{ 
	int iterator;
	char ch;
	printf("\n Enter the elements of the array: ");
	for( iterator = 0 ; iterator < SIZE ; iterator++ )
		scanf("%d",&arr[iterator]);
	printf("\n ARRAY: \n\n\n");
	for( iterator = 0 ; iterator < SIZE ; iterator++ )
		printf("%d  ",arr[iterator]);
}

void sort(int arr[])
{
	int iterator1,temp,iterator2;
  	for( iterator1=0 ; iterator1<SIZE; iterator1++ )
  	{
    	for( iterator2=iterator1 ; iterator2>0 ; iterator2--)
    	{
      		if( (arr[iterator2] < arr[iterator2-1] )
      		{
	  			swap(arr[iterator2],arr[iterator2 - 1]);
      		}
    	}
  	}	
  	printf("\n SORTED ARRAY: ");
  	for( iterator1=0 ; iterator1<*n;iterator1++)
  		printf("%d  ",arr[iterator1]);
}


int binary_search(int arr[])
{
	int iterator1,key,low,high,mid, counter = 0;
  	printf("\n\n Enter the number to be searched: ");
  	scanf("%d",&key);
  	low = 0;
  	high = SIZE-1;
  	while((arr[mid = (low + high)/2] != key ) && low <= high)
  	{
  		if( key < arr[mid])
  			high = mid - 1;
  		else
  			low = mid + 1;
  	}
  	if(high<low || arr[mid] != key)
  		return 0;
  	else
  		return mid;
}

void swap(int a , int b )
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}