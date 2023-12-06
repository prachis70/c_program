//Wap to find minimum from the 1d array.

#include<stdio.h>

main()
{
	int a[5];
	int mini;
	int i;

	for(i=0;i<5;i++)
	{
		printf("enter the value of a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
    {
    	if(a[5]>=mini)
    	{
    		mini=a[i];
		}
	}
	printf("%d",mini);	

}
