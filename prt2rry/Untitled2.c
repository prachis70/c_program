#include<stdio.h>

 main()
{  
// Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
	int i,x,y,s=0;

	printf("Enter the size x : ");
	scanf("%d",&x);
	printf("Enter the size  y: ");
	scanf("%d",&y);

	int a[x],b[y];
	int z = x+y;
	int c[z];

	for(i=0; i<x; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0; i<y; i++)
	{
		printf("Enter the value of b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	for(i=0; i<x; i++)
	{
		c[i] = a[i];
	}
	for(i=x; i<z; i++)
	{
		c[i] = b[s];
		s++;
	}
	printf("\n");
	for(i=0; i<z; i++)
	{
		printf("%d ",c[i]);
	}
}
