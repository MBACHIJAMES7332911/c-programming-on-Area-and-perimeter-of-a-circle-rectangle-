#include<stdio.h>
int main()
{
double k=0.1;
double amount;
double discount;
printf("enter the amount:");
scanf("%lf",&amount);
discount=amount*0.1;
if(amount>1000)
	{printf("discount is %lf",discount);
	}
	else
	{printf("sorry no discount is offered");
	}
	return(0);
}
