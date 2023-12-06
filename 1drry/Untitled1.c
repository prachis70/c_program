#include<stdio.h>

main()
{
//	1.WAP to get & print 1D array of N elements.
 int n;
 printf("enter the size of array:");
 scanf("%d",&n);
 int a[10];
 int i,j;

 for(i=1;i<=n;i++)
 {
 	printf("enter the values:");
 	scanf("%d",&a[i]);
 }
 for(i=1;i<=n;i++)
 {
 	printf("%d\n",a[i]);
 }
 printf("\n");

}
