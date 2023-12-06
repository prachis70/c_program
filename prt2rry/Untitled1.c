#include<stdio.h>

 main()
{
//	 Write a Program to find leap years between two given numbers and store them in an array. And then print that array. Make this program in the shortest memory.
	int n,y;

	printf("Enter the value of n : ");
	scanf("%d",&n);

	printf("Enter the value of y: ");
	scanf("%d",&y);

	int i;
	int a[n];

	for(i=n; i<=y; i++)
	{
		if(i%4==0)
		{
			printf("%d ",i);
		}
	}
}

