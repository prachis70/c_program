#include<stdio.h>

main()
{
//	3. WAP to find the average of the 1D array.

   int n;
   printf("enter the size of array:");
   scanf("%d",&n);
   int a[10];
   int i;
   int sum=0;
   for(i=1;i<=n;i++)
   {
 	printf("enter the value of n:");
 	scanf("%d",&a[i]);
   }
 for(i=1;i<=n;i++)
   {
 	sum=sum+a[i];
   }
 printf("sum is %d",sum/n);

}
