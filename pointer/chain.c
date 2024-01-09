//4. wap to find the address of the chain pointer.
#include<stdio.h>
main()
{
 int n;
 int *ptr=&n;
 int **ptr=&ptr;
 printf("%d",ptr);
}