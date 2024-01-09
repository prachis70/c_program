#include<stdio.h>
main()
{
	int n;
	printf("Enter :");
	scanf("%d",&n);
	int a[n];
	//int *ptr=&a[n];
	int run;
	for(int i=0;i<n;i++)
	{
		printf("Enter no:[%d]",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
	    int*ptr=&a[i];
	    int run=(*ptr* *ptr);
	    printf("square is:%d\n",run);
	}
	
}