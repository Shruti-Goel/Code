#include<stdio.h>
#include<conio.h>
void main()
{
  int celsius;
  int lower = 0,upper = 200;
  int stepSize = 20;
  float fahrenheit;
  while(lower <= upper)
  {
    celsius = lower;
    fahrenheit = ( ( ( celsius + 32.0 ) *  9.0  )  / 5.0 ) ;
    printf("\nCelsius = %d \t Fahrenheit = %6.1f",celsius,fahrenheit);
    lower = lower + stepSize;
  }
  getch();
}
