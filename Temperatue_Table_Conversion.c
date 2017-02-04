#include<stdio.h>
#include<conio.h>
int main()
{
  int fahrenheit;
	int lower=0;
	int upper=200,stepSize=20;
  float celsius;
  clrscr();
  printf("   Fahrenheit    	Celsius\n");
  while(lower<=upper)
  {
    fahrenheit=lower;
    celsius = ( fahrenheit - 32.0 ) * ( 5.0 / 9.0 );
    printf("\n%3d%6.1f",fahrenheit,celcius);
    lower=lower+stepSize;
  }
  getch();
	return 0;
}
