#include<stdio.h>
int main()
{
	int hours;
	int salary=35000;
	printf("enter extra working hours\n");
	scanf("%d",&hours);
	salary=35000+hours*500;
	if (hours >=1 && hours<=64)
	{
		printf("salary=%d",salary);
	}
	else
	{
	printf("salary=35000");
	}
	return(0);
}
