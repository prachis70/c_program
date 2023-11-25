#include<stdio.h>
main()
{
	int i,n;
	printf("enter the num.");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
    if(n%2==1)
	{
		printf("this is odd num.");
	}
	else
	{
	    printf("this is not odd num.");	
    }
	}
}
//	if(n%2==1)
//	{
//		printf("this is odd num.");
//	}
//	else
//	{
//	    printf("this is not odd num.");	
//    }}
