//Odd numbers from odd_file.txt:
//51, 53, 55, 57, 59, 61, 63, 65, 67, 69
#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("even file.txt","w");
	printf("Enter");
	int a=50,b=70;
	int i;
	for(i=a;i<=b;i++)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
			fprintf(fp,"%d\n",i);
		}
	}
}

