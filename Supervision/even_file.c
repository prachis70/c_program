//.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.
//For example, 
//Output:
//Even numbers from even_file.txt:
//50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70
//
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
		if(i%2==0)
		{
			printf("%d\n",i);
			fprintf(fp,"%d\n",i);
		}
	}
}
