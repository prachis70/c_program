//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15
#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=15;i++)
	{
		for(j=i;j<=15;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}