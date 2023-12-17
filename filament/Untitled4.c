//6. WAP check string is numeric or not.
#include<stdio.h>
#include<string.h>
main()
{
	char a[20];
	printf("Enter here.");
	scanf("%s",a);
	int digits=0;
	int i;
	for(i=0;a[i];i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			digits++;
		}
	}
	if(digits!=0)
	{
		printf("this is numeric");
	}
	else
	{
		printf("this is numeric");
	}

	
	
	
}
