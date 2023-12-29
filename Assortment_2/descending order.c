//2. WAP to get the array and print in descending order.
#include<stdio.h>

main()
{
   int n;
   printf("enter the array:");
   scanf("%d",&n);
   int i,j;
   int a[n];
   for(i=0;i<n;i++)
   {
   	 printf("enter:");
   	 scanf("%d",&a[i]);	 
   }
   for(i=0;i<n;i++)
   {
   	for(j=0;j<n;j++)
   	{ 
   		if(a[i]>a[j])
   		{
   			int temp;
   			temp=a[i];
   			a[i]=a[j];
   			a[j]=temp;
		   }
	   }
   }
   for(i=0;i<n;i++)
   {
   	printf("%d\n",a[i]);
   }
}
