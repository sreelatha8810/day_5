#include<stdio.h>
int main()
{
	int a=88;
	int b=10;
	int c=908;
	int d=56;
	int stmt_1,stmt_2;

	printf("stmt_1 is :a>c<b:%d",a>c<b);
	printf("\n stmt_2 is :b=d:%d",b==d);
	printf("\n stmt_1||stmt_2:%d",a>c<b||b==d);
}