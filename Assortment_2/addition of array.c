//4. Write a program to get two array and create addition of array position wise.
#include<stdio.h>
main()
{
	int r,c;
	printf("Enter the r nnum:");
	scanf("%d",&r);
    printf("Enter the c num:");
	scanf("%d",&c);
	int a[r][c];
	int b[r][c];
	int n[r][c];
	int i,j;
	printf("Elements 1:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("a[%d][%d] :",i,j);
		scanf("%d",&a[i][j]);
		}
	}
		printf("\n");
		printf("Elements 2: \n ");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	} 	
	 for(i=0;i<r;i++)
	   {
		  for(j=0;j<c;j++)
		   {
			  n[i][j]=a[i][j]+b[i][j];
		      printf("%d",n[i][j]);
		   }
		   printf("\n");
	}
}
