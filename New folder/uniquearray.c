#include<stdio.h>
main()
{
	int i,j;
	int cheak=0;
	int a[8]={1,5,3,4,6,1,4,3};

	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
		    if(a[i]==a[j]&&i!=j)
			{

				cheak=1;
			}	



		}
       	if(cheak==0)
			{
				printf("%d",a[i]);

			}
			cheak=0;
}
	}
