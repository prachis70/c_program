#include<stdio.h>
main()
{
	int a;int b;
    a=b; 
	printf("Enter a.");
	scanf("%d",&a);
	printf("Enter b.");
	scanf("%d",&b);
		
	int *ptr=&a;
	int **ptr1=&ptr;
		
	int *ptr2=&b;
	int **ptr3=&ptr2;
	
	**ptr1=**ptr1+**ptr3;
	**ptr1=**ptr1-**ptr3;
	**ptr1=**ptr1+**ptr3;
	
    printf("%d\n",ptr1);printf("%d\n",ptr3);	
	
}