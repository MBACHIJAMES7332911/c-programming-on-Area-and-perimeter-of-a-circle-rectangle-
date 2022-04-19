//To find whether a given year is a leap year or not
#include <stdio.h>
int main()
 {
 	int year;
 	int month;
 	printf("Enter the year\n");
 	scanf("%d",&year);
 	printf("Enter the days of february month\n");
 	scanf("%d",&month);
 	if (year % 4==0 && month==29 )
 	{
 		printf("The year is a leap year\n");
	 }
	 else
	  {
	 printf("The year is not a leap year\n");	
	 }
	return 0;
}
