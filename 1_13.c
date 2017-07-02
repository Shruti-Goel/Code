#include<stdio.h>

void main()
{
	char ch;
	int ch_count = 0, arr[50], counter=0, loop_iterator, word=0, max_val;
	for(counter = 0; counter<50; counter++)
		arr[counter++] = 0;
	counter = 0;
	while((ch = getchar())!= EOF)
	{
		if( ch != '\n' && ch!= '\t' && ch!= ' ')
			ch_count++;
    	while((ch=getchar())!=' ')
    	{
    		if( ch == '\n' || ch == '\t' )
    			break;
    		else	
    			ch_count++;
    	}
    	arr[counter++] = count;    			
    	ch_count = 0;	
	}
	ch_count = counter;

	max_val = arr[0];
	for(counter = 1; counter < ch_count; counter++)
	{
		if( arr[counter] > max_val )
			max_val = arr[counter];
	}
	for(counter = max_val ; counter>0; counter--)
	{
		for(loop_iterator = 0; loop_iterator < ch_count; loop_iterator++)
		{
			if(arr[loop_iterator] >= counter )
				printf(" %c ",254);
			else
				printf("   ");
		}
		printf("\n");
	}
}
