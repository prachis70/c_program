#include<stdio.h>
main()
{
	int a;
	printf("enter the no:->");
	scanf("%d",&a);
	if(a>0)
	{
		printf("num. is positive.");
	}
	else
	{
		if(a<0)
		{
			printf("num. is negative.");
		}
		else
		{
			printf("num. is neutral.");
		}
	}
}
