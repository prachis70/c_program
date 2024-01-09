#include<stdio.h>
main()
{
  int a,b;
  printf("Enter a.");scanf("%d",&a);
  printf("Enter b.");scanf("%d",&b);
  int c;
  int *ptr=&a;
  int *ptr1=&b;
  int *ptr2=&c;
  *ptr2=*ptr;
  *ptr=*ptr1;
  *ptr1=*ptr2;
  printf("%d\n",*ptr);printf("%d\n",*ptr1);
  
}