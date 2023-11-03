#include<stdio.h>
main()
{
	int x,y,z;
	int add;
	printf("enter the number:");
	scanf("%d",&x);
	printf("enter the number:");
	scanf("%d",&y);
	printf("enter the number:");
	scanf("%d",&z);
	add=(x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x));
	printf("ans is%d",add);
	
}