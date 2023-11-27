#include<stdio.h>
main()
{
	int x=1;      
	int y=28;
	int sum=0;
	printf("Enter the num.");
	scanf("%d",&x);
	for(x=1;x<=y;x++)
	{
		if(x%2==0)
		{
			sum=sum+x;
			printf("%d ",x);
		}
	}
	printf("\n%d",sum);
		
}