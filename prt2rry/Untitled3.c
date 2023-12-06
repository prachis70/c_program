//Write a Program to find square of each element from the given array.
#include<stdio.h>

 main()
{
	int n;

	printf("Enter the array size : ");
	scanf("%d",&n);

	int i;
	int a[n];
	int s[n];

	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}

	for(i=0; i<n; i++)
	{
		printf("a[%d] : %d\n",i,a[i]);
	}

	for(i=0; i<n; i++)
	{
		s[n] = a[i] * a[i];
		printf("%d ",s[n]);
	}

}
