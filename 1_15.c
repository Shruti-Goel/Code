#include<stdio.h>
#include<conio.h>
#define max_step 50


void temp_converter(int,int);

void main()
{
  int low=0,high=2000;
  clrscr();
  temp_converter(high,low);
  getch();
}

void temp_converter(int high,int low)
{
    float celcius;
    int fahrenheit;
    printf("Fahrenheit\t\tCelsius\n");
    while(low<=high)
    {
      fahrenheit = low;
      celcius = ( fahrenheit - 32.0 ) * ( 5.0 / 9.0 );
      printf("\n%3d%6.1f",fahrenheit,celcius);
      low = low + max_step;
    }
}

