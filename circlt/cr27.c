//    5
//   454
//  34543
// 2345432
//123454321
#include<stdio.h>
main()
{

	int i,j,k;

	for(i=5; i>=1; i--)
	{
		for(k=1; k<i; k++)
		{
			printf(" ");
		}
		for(j=i; j<=5; j++)
		{
			printf("%d",j);
		}
		for(j=4; j>i-1; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}

}
