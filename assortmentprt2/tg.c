#include<stdio.h>

main()
{
	int target;
	printf("Enter the value of n.",target);
	scanf("%d",&target);
	int a[10]={1,2,3,4,56,7,8,9,10};
	int lenght=sizeof(a)/4;
	int i,chek=0;
	for(i=0;i<target;i++)
	{
		if(target==a[i])
		{
			chek=1;
		}
	}
	if(chek==1)
	{
		printf("value is available");
	}
	else
	{
		printf("value is not  available");
	}


}
