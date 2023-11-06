#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("enter the num.");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	//a,b,c,d,e
	if(a>b)
	{
		//a,c,d,e
		if(a<c)
		{
			//a,d,e
			if(a<d)
			{
			   //a,e
			   if(a<e)
			   {
			   	    printf("a is mini.");
			   }
			   else
			   {
			   		printf("e is mini.");
			   }	
			}
			else
			{
				//a,e
				if(a<e)
				{
					printf("a is mini.");
				}
				else
				{
					printf("e is mini.");
				}
			}
		}
		else
		{
			//a,d,e
			if(a<d)
			{
				//a,e
				if(a<e)
				{
					printf("a is mini.");
				}
				else
				{
					printf("e is mini.");
				}
			}
			else
			{
				//a,e
				if(a<e)
				{
					printf("a is mini.");
				}
				else
				{
					printf("e is mini.");
				}
			}
		}
	}
	else
	{
		//a,c,d,e
		if(a<c)
		{
			//a,d,e
			if(a<d)
			{
				//a,e
				if(a<e)
				{
					printf("a is mini.");
				}
				else
				{
					printf("e is mini.");
				}
			}
			else
			{
			  //a,e
			  if(a<e)
			  {
			  		printf("a is mini.");
			  }
			  else
			  {
			  		printf("e is mini.");
			  }	
			}
		}
		else
		{
		//a,d,e
		  if(a<d)
		   {
			//a,e
			if(a<e)
			{
				printf("a is mini.");
			}
			else
			{
				printf("e is mini.");	
			}
		   }
		   else
		   {
		   	//a,e
		   	if(a<e)
		   	{
		   		printf("a is mini.");	
			}
			else
			{
				printf("e is mini.");
			}
		   }	
		}
    }
}