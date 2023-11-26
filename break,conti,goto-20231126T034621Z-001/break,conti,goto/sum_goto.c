#include<stdio.h>
main()
{
	//sum=goto statemant
	int sum=0;
	int x=50;
	int n;
	printf("enter the num:");
	scanf("%d",&n);
	x:
    sum=sum+x;	 	
	x++;
	if(x<=n)
	{
		goto x;
	}
	printf("%d",sum);
	
}