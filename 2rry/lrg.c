//2. Write a C program to find the second largest number in the array.

#include<stdio.h>

main()
{

   int n;
   printf("enter the value of sizeof array:");
   scanf("%d",&n);
   int max=0;
   int i;
   int a[n];
   for(i=0;i<n;i++)
   {
   	printf("enter the value ofa[%d]:",i);
   	scanf("%d",&a[i]);

   }

   for(i=0;i<n-1;i++)
   {
   	if(a[n]>=max)
   	{
   	 max=a[i];	
	   }
   }
   printf("%d",max);


   }
