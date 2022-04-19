#include<stdio.h>
int main()
{ 
int marks;
int grade;
printf("enter marks");
scanf("%d",&marks);
if (marks>=70 && marks<=100)
{
	printf("Grade A");
}
else if(marks>=60 && marks<=69)
{
	printf("Grade B");
}
else if(marks>=50 && marks<=59)
{
	printf("Grade C");
}
else if(marks>=40 && marks<=49)
{
	printf("Grade D");
}
else if(marks>=0 && marks<=39)
{
	printf("FAIL");
}
else 
{
	printf("SYNTAX ERROR");
}
return (0);
}
