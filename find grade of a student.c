//To find grade of a student
#include <stdio.h>
int main()
 {
 	float marks;
 	float grade;
 	printf("enter your subjects marks\n");
 	scanf("%f",&marks);
 	if (marks>=70 && marks<=100)
 	{
 		printf("Grade A\n");
	 }
	 else if (marks>=60 && marks<=69)
	 {
	 	printf("Grade B\n");
	 }
	 else if (marks>=50 && marks<=59)
	 {
	 	printf("Grade C\n");
	 }
	 else if (marks>=40 && marks<=49)
	 {
	 	printf("Grade D\n");
	 }
	 else if (marks>=0 && marks<=39)
	 {
	 	printf("Grade E fail\n");
	 }
	 else {
	 	printf("Sorry Marks not included or recognized\n");
	 }
	return 0;
}
