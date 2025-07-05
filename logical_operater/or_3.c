#include<stdio.h>
void main()
{
	int a;
	int b;
	int c;
	int d;
	int stmt_1;
	int stmt_2;
	printf("enter the A value:");
	scanf("%d",&a);
	printf("\n the value of A:%d",a);

	printf("\n enter the value ofB:");
	scanf("%d",&b);
	printf("\n the value of B:%d",b);

	printf("\n enter the value of  C:");
	scanf("%d",&c);
	printf("\n the value of C:%d",c);

	printf("\n enter the value of  D:");
	scanf("%d",&d);
	printf("\n the value of D:%d",d);

	printf("\n stmt_1 is a=b:%d",a!=b);
	printf("\n stmt_2 is c<d:%d",c<=d);

	printf("\n stmt_1||stmt_2:%d",a=b||c<d);
}