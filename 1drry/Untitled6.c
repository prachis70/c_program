#include<stdio.h>

main()
{
//	 4. wap to reverse number of given number.


  int n;
  printf("enter the value of n:");
  scanf("%d",&n);
  int revers=0;
  int remainder[n];



  while(n!=0)
  {
  	 remainder[n]=n%10;
  	 revers=revers*10+ remainder[n];
  	 n/=10;

  }
  printf("%d",	 revers);
}
