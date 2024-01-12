#include<stdio.h>
main()
{
	int n;
	printf("num:");
	scanf("%d",&n);
	int i;
	int a[n];
	int mx=0;
	int *ptr1=&mx;
	for( i=0;i<n;i++)
	{
		printf("num[%d]",i);
		scanf("%d",&a[i]);
	}
	for( i=0;i<n;i++)
	{
		int *ptr=&a[i];
		if(*ptr>*ptr1)
		{
			*ptr1=*ptr;
		}
    }
    printf("mx->%d",*ptr1);
}
