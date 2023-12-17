#include<stdio.h>

main()
{
//	 char name[20]="nitin";
//	 


    char n;
//    printf("enter the size string:");
//    scanf("%c",&n);

    char name[n];
    printf("enter the string :");
    scanf("%s",name);
	 int i,cheak=0;
	 int length=strlen(name);
	 int j=length-1;


	 for(i=0;i<length;i++)
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