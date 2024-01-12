#include<stdio.h>
main()
{
	char r[10];
	printf("num:");
	gets(r);
	int ln=strlen(r);
	int *ptr=&ln;
	printf("%d",*ptr);
}

