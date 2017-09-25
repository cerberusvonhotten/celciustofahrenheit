#include <stdio.h>
/*
Celsius to Fahrenheit converter
by Cerberus Von Hotten
2017
*/

int main()
{
float celsius,fahrenheit;


printf("Input the celsius value:");
scanf("%f", &celsius);

fahrenheit = celsius * 9.0/5.0 + 32.0;

printf(" %f Celsius = %f Fahrenheit \n",celsius, fahrenheit);




return 0;

}
