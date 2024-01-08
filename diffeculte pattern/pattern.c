#include<stdio.h>
main()
{
	int i,j;
	int p=1,q=1;
	int r=1;
    
	for(i=1;i<=10;i++)
	{
		for(p=1;p<i;p++)
		{
			printf(" - ");
		}
		for(j=i;j<=10;j++)
		{
			printf(" %d",r);
			if(r>=1&&r<=9)
			{
				printf(" ");
			}
			r=r+j;
		}
		for(j=9;j>=i;j--)
		{
			printf(" %d",r);
			r=r+j;
		}
		q=q+i;
		r=i+q;
		printf("\n");
	}
}