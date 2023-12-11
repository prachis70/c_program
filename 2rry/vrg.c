#include<stdio.h>

main()
{
//	Q.1 Write a Program to find the average of a given 2D array.

     int a[3][3];
     int i,j;
     float  sum=0;
     for(i=0;i<3;i++)

     {
     	for(j=0;j<3;j++)
     	{
     		printf("enter the value of a[%d][%d]:",i,j);
     		scanf("%d",&a[i][j]);
		 }
	 }
	 for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
		 {

		 	sum=sum+a[i][j];
		 }

	 }
	 printf("%.2f",sum/9);
}
