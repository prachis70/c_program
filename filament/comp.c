#include<stdio.h>
main()
{
	char name1[5];
	char name2[5];
	int value;
    puts("Enter the num.");
    gets(name1);
    puts("Enter the num.");
    gets(name2);
    value=strcmp(name1,name2);
    if(value==0)
    {
    	printf("This is compair.");
	}
	else
	{
		printf("This is not compair.");
	}
    
	
}
