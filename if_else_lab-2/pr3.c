#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the num.");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	//a,b,c,d
	if(a>b)
	{
		//a,c,d
		if(a>c)
		{
			//a,d
			if(a>d)
			{
			   printf("a is max.");	
			}
			else
			{
			   printf("d is max.");	
			}
		}
		else
		{
			//a,d
			if(a>d)
			{
				printf("a is max.");
			}
			else
			{
				printf("d is max.");
			}
		}
	}
	else
	{
		//a,c,d
        if(a>c)
        {
        	//a,d
        	if(a>d)
        	{
        		printf("a is max.");
			}
			else
			{
				printf("d is max.");
			}
		}
		else
		{
			//a,d
			if(a>d)
			{
				printf("a is max.");
			}
			else
			{
				printf("d is max.");
			}
		}
	}
}