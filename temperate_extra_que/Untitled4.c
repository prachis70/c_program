#include<stdio.h>
main()
{
	int x=1;
	int i;
	int n;
	printf("enter the num.");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		for(x=1;x<=10;x++)
		{
		printf("%d*%d=%d\n",i,x,i*x);
		}
		printf("\n");
		
	}
		
}