#include<stdio.h>

main()
{

	int n;
	printf("enterb the value:");
	scanf("%d",&n);
	int i;
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the valuea[%d]:",i);
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
	{
		 if(a[i]<0)
		 {
		 	printf("%d",a[i]);
		 }
	}
}
