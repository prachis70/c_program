#include<stdio.h>
void opr()
{
	int n,n1;
	printf("num:");
	scanf("%d%d",&n,&n1);
	int i,j;
	int a[n][n1];
	int num;
	for( i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			 printf("num[%d][%d]",i,j);
			 scanf("%d",&a[i][j]);
		}
	}
	for( i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			int *ptr=&a[i][j];
			int num=*ptr**ptr**ptr;
			printf("qub =>%d\n",num);
		}
	}
	
}
main()
{
	
	opr();
	
}

