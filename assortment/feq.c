#include<stdio.h>

void main()
{
	int n;
	printf("Enter the size of n : ");
	scanf("%d",&n);

    int	a[n];
    int i,j;
    int count;

    for(i=0; i<n; i++)
    {
    	printf("Enter the value of a[%d] : ",i);
    	scanf("%d",&a[i]);
	}

	  for(i=0; i<n; i++)
    {
    	printf("a[%d] : %d\n",i,a[i]);
	}

	for(i=0; i<n; i++)
	{
		count=1;
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				a[j]=-1;
				count++;
			}
		}
		if(a[i]!=-1)
		{
			printf("%d -> %d\n",a[i],count);
		}
	}
}