#include<stdio.h>

void calc()
{
	int a,b,re=0;
	
	int n;
	printf("Enter the char:");
	scanf(" %c",&n);
	
	printf("Enter the num a:");
	scanf("%d",&a);
	printf("Enter the num b:");
	scanf(" %d",&b);
	
	switch(n)
	{
		case '+' :re= a+b;
		         printf("sum:%d",re);
		         break;
	  	case '-' :re= a-b;
		         printf("sub:%d",re);
		         break;
		case '*' :re= a*b;
	        	 printf("multi:%d",re);
	        	 break;
		case '/' :re= a/b;
		         printf("div:%d",re);
	         	 break;
	}
	slash();
	calc();
}
    
void slash()
{
	printf("\n");
}
 main()
{
	calc();
}