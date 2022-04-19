//temperature
#include<stdio.h>
int main()
{
	int temperature;
	printf("enter value temperature/n");
	scanf("%d",&temperature);
	if(temperature<0)
{
	printf("freezing weather");
}
else if(temperature>=0 && temperature<10)
{
	printf("very cold weather");
}
else if(temperature>=10 && temperature<20)
{
	printf("cold weather");
}
else if(temperature>=20 && temperature<30)
{
	printf("normal weather");
}
else if(temperature>=30 && temperature<40)
{
	printf("hot weather");
}
else
	printf("very hot weather");
return 0;
}
