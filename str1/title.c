
#include<stdio.h>

main()
{
	int n,i;
    printf("Enter string array size :");
    scanf("%d",&n);
     
    char a[n];
    printf("Enter the string : ");
    scanf("%s",&a);
	
	if(a[0] >= 97)
	{
		a[0] = a[0] - 32;
	}
	
	int length = sizeof(a);
	
	for(i=0; i<length; i++)
	{
		if(a[i] == ' ')
		{
			if(a[i+1] >= 97)
			{
				a[i+1] -=32;
			}
		}
	}
	
	printf("string in Title Case : %s",a);
}
