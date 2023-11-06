#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("enter the num.");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	//a,b,c,d,e
	(a>b)?(a<c)?(a<d)?(a<e)?printf("a is min"):printf("e is mini."):(a<e)?printf("a is mini."):printf("e is mini."):(a<d)?(a<e)?printf("a is mini."):printf("e is mini."):(a<e)?printf("a is mini."):printf("e is mini."):(a<c)?(a<d)?(a<e)?printf("a is mini."):printf("e is mini."):(a<e)?printf("a is mini."):printf("e is mini."):(a<d)?(a<e)?printf("a is mini."):printf("e is mini."):(a<e)?printf("a is mini."):printf("e is mini.");
}