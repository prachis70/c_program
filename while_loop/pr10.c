#include<stdio.h>
main()
{
	int n;
	printf("Enter the num.");
	scanf("%d",&n);
	int i=1;
	while(i<=10)
	{
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
}