#include<stdio.h>
main()
{
	int n;
	int re=0;
	int rem;
	printf("enter the nim.");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		re=re*10+rem;
		n/=10;
	}
	printf("%d",re);
}