//Q.1 Write a Program to find the reverse of a 1D array using a Chain of Pointers.
//For example,
//Input:
//Enter the array's size: 5
//
//
//Enter array elements:
//a[0] = 5
//a[1] = 9
//a[2] = 4
//a[3] = 7
//a[4] = 3
//
//Output:
//Reversed array elements:
//3, 7, 4, 9, 5
#include<stdio.h>
main()
{
	int n;
	printf("Enter the num.");	
	scanf("%d",&n);
	int a[n],i;
	int *ptr=&a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}

	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",ptr);
		ptr-=1;
		
	}
	for(i=n-1;i>=0;i--)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	
}