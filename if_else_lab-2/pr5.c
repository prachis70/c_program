#include<stdio.h>
main()
{
	int a=2,b=3,c=4;
	printf("enter the num.");
	scanf("%d%d%d",&a,&b,&c);
	//a,b,c
	(a<b)?(a<c)?printf("a is mini."):printf("c is mini."):(a<c)?printf("a is mini."):printf("c is mini.");
}