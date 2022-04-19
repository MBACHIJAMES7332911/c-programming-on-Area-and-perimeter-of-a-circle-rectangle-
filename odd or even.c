//To determine whether a number is odd or even
#include<stdio.h>
int main()
{
int num;	
printf("Enter number a\n");
scanf("%d",&num);
if (num % 2 == 0)
{printf("The number is even");
}
else{printf("The number is odd");
}
return(0);
}
