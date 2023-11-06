#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the num.");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	//a,b,c,d
	(a>b)?(a>c)?(a>d)?printf("a is max."):printf("d is max."):(a>d)?printf("a is max."):printf("d is max.")?(a>c)?(a>d):printf("a is max."):printf("d is max."):(a>d)?printf("a is max."):printf("d is max.");
}