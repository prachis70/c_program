//Wap to find maximum from the 1d array.

#include<stdio.h>

main()
{
	int a[5];
	int max;
	int i;

	for(i=0;i<5;i++)
	{
		printf("enter the value of a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
    {
    	if(a[5]<=max)
    	{
    		max=a[i];
		}
	}
	printf("%d",max);	

}
