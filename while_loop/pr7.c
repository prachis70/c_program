#include<stdio.h>
main()
{
	int n;
	printf("enter number :");
	scanf("%d",&n);
	int i = 1;

	while(i<=n)
	{
		printf("%d ",n);
		n--;
	}
}