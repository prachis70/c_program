#include<stdio.h>
main()
{
	int x,y;
	int sum;
	printf("enter the number:");
	scanf("%d",&x);
	printf("enter the number:");
	scanf("%d",&y);
	
	sum=(x*x)+(2*x*y)+(y*y);
	
	printf("value is%d=",sum);
}