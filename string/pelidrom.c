#include<stdio.h>

main()
{
    char n;
    printf("enter the size string:");
    scanf("%c",&n);

    char name[n];
    printf("enter the string :");
    scanf("%s",name);
	 int i,j=4,cheak=0;
	 for(i=0;i<5;i++)
	 {
	      if(name[i]!=name[j])
	 	{
	 		cheak=1;
		 }
		 j--;
	 }
	 if(cheak==1)
	 {
	 	printf("this is not pelidrom");
	 }
	 else
	 {
	 		printf("this is  pelidrom");
	 }
}
