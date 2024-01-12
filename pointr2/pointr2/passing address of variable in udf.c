//wap to change value by passing address of variable in udf.
#include<stdio.h>
void in(int *pr)
{
	printf("incrmnt!\n");
	*pr=*pr+1;
}
main()
{
	int pr;
	printf("enter   the value of a:");
	scanf("%d",&pr);
	
	in(&pr);
	printf("%d",pr);
	
}
