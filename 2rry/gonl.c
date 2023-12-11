//Q.3 Write a Program to find the sum of diagonal elements from a given 2D array.

#include<stdio.h>

main(){

	int a[3][3];

	int i,j;
	int sum=0;

		  for(i=0;i<3;i++)

     {
     	for(j=0;j<3;j++)
     	{
     		printf("enter the value of a[%d][%d]:",i,j);
     		scanf("%d",&a[i][j]);
		 }
		 printf("\n");
	 }

	 for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{
	 		if(i==j)
	 		{
	 			sum=sum+a[i][j];
			 }
		 }

	 }
	 		 printf("diagonal sum is %d",sum);
}
