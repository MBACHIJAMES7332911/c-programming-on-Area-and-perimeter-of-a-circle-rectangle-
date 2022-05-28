#include <stdio.h>
int main()
{
	float temperature;
	float celsius;
	float fahrenheit;
printf("Enter temperature in Celsius\n");
scanf("%f",&celsius);
//celsius to fahrenheit conversion formula.
fahrenheit = celsius * 9 / 5 + 32;
printf("fahrenheit=%f\n",fahrenheit);
return(0);
}
