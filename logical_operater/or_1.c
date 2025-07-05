#include<stdio.h>
void main()
{
	float a=23;
	float b=45;
	float c=98;
	int stmt_1,stmt_2;

	printf("stmt_1 is a>=b:%f",a>=b);
	printf("\n stmt_2 is a=c :%f",a==c);
	printf("\n stmt_1||stmt_2:%f",a>=b||a==c);
}