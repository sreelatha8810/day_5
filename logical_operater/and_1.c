#include<stdio.h>
int main()
{
	int a=234;
	int b=567;
	int c=34;
	int d=234;
	int stmt_1;
	int stmt_2;

	printf("stmt_1 is a<c:%d",a<c);
	printf("stmt_2 is d=b:%d\n",d<b);

	printf("stmt_1&&stmt_2:%d\n",(a<c)&&(d>b));
	return 1;
}				