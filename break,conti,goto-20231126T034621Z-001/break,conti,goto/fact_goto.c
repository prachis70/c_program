#include<stdio.h>
main()
{
	//fectorial
	int f=1;
	int n;
	printf("enter the num:");
	scanf("%d",&n);
	int x=1;
	x:
	f=f*x;	
	x++;
	if(x<=n)
	{
		goto x;
	}
	printf("%d",f);
	
}