//Write a Program to perform the addition operation of two 2D arrays & store it in another array. Keep in mind that both array sizes must be the same.

#include<stdio.h>

main()
{
	int a[3][3];
	int sum[3][3];
	int i,j;
	  for(i=0;i<3;i++)

     {
     	for(j=0;j<3;j++)
     	{
     		printf("enter the value of a[%d][%d]:",i,j);
     		scanf("%d",&a[i][j]);
		 }
		 printf("\n");
	 }
	 printf("\n");
	 int b[3][3];
	  for(i=0;i<3;i++)

     {
     	for(j=0;j<3;j++)
     	{
     		printf("enter the value of a[%d][%d]:",i,j);
     		scanf("%d",&b[i][j]);
		 }
		 printf("\n");
	 }

    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];

		}
	}
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
		{
		  printf("%d ",sum[i][j]);
		}
		printf("\n");
	}


}
