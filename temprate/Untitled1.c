#include<stdio.h>
main()
{
	char ch='a';
	printf("Enter the any alpha.");
	scanf("%c",&ch);
	do
	{
		printf("%c\n",ch);
		ch++;
	}while(ch<='p');
}
