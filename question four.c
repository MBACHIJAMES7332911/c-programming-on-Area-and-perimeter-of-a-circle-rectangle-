/*finding discount of values if they exceed 1000 by 10%*/

int main()
{
int 0.1;
int amount;
int discount;
printf("enter the amount:");
scanf("%d",&amount);
discount=amount*0.1;
if(amount>1000)
	{printf("discount=%d",discount);
	}
	else
	{printf("sorry no discount is offered");
	}
	return(0);
}
