#include<stdio.h>
main()
{
	int age;
	printf("Enter age:->");
	scanf("%d",&age);
	if(age>0)
	{
		if(age>100)
		{
			printf("this person is very old.");
		}
		else
		{
			printf("age is valid. ");
		}
	}
	else
	{
		if(age<0)
		{
			printf("age is negative.");
		}
		else
		{
		   printf("age is netural.");	
		}
	}
}
