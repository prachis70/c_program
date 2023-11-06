#include<stdio.h>
main()
{
	int a=2,b=3,c=4;
	printf("enter the num.");
	scanf("%d%d%d",&a,&b,&c);
	//a,b,c
	if(a<b)
	{
		//a,c
		if(a<c)
		{
		    printf("a is mini.");
		}
		else
		{
			 printf("c is mini.");
		}
	}
	else
	{
		//a,c
		if(a<c)
		{
			 printf("a is mini.");
		}
		else
		{
			 printf("c is mini.");
		}
	}
}