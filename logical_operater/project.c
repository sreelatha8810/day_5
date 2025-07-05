#include<stdio.h>
void main()
{
	float prinicipal_amount;
	float interest;
	float duration;
	float interest_percentage;
	float total_interest_percentage;
	float total_interest_payable;
	float total_amount_payable;
	float amount_payable_permonth;
	
	printf("enter the prinicipal_amount:");
	scanf("%f",&prinicipal_amount);
	printf("the prinicipal_amount:%f",prinicipal_amount);
	
	printf("\n enter the interest:");
	scanf("%f",&interest);
	printf("\n the interest:%f",interest);

	printf("\n enter the duration:");
	scanf("%f",&duration);
	printf("\n the duration:%f",duration);

	interest_percentage=interest/12;

	printf("\n the interest_percentage:%f",interest_percentage);
	
	total_interest_payable=prinicipal_amount/100*interest_percentage;

	printf("\n total_interest_payable:%f",total_interest_payable);

	total_amount_payable=prinicipal_amount+total_interest_payable;

	printf("\n total_amount_payable:%f",total_amount_payable);

	amount_payable_permonth=total_amount_payable/duration;

	printf("\n amount_payable_permonth=%f",amount_payable_permonth);

	printf("|		MONTHLY EMI			|\n");
	printf("|____________________________________________________________________________	_|\n");
	printf("|	amount_payable_permonth		:			%f	|\n",amount_payable_permonth);
	printf("|	prinicipal_amount		:			%f	|\n",prinicipal_amount);
	printf("|	total_payable_amount		:			%f	|\n",total_amount_payable);
	printf("|_____________________________________________________________________________|\n");			

	
}