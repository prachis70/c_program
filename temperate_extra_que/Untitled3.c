#include<stdio.h>
main()
{
	int i,n,f=1;
	printf("Enter the num.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*3;
	}
	printf("%d",f);
}
