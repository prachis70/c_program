#include<stdio.h>

main()
{

  int i,j,k;

  for(i=1;i<=7;i++)
  {
  	for(j=1;j<=7;j++)
  	{
  		if(j==4&&(i!=1&&i!=2&&i!=3)||i==1&&(j!=2&&j!=3&&j!=4&&j!=5&&j!=6)||i==2&&(j!=1&&j!=3&&j!=4&&j!=5&&j!=7)||i==3&&(j!=2&&j!=1&&j!=4&&j!=7&&j!=6))
  		{
  		printf("*");	
		  }
		  else

		  {
		  	printf(" ");
		  }
	  }
	  printf("\n");
}
}
