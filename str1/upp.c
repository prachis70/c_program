#include<stdio.h>
main()
{
	char n;
	printf("Enter string array size :");
	scanf("%c",&n);
	
	char a[n];
	printf("Enter your String in Upercase :");
	scanf("%s",&a);
	
	
    int i;
    int length = sizeof(a);
    for (i = 0; i < length; i++) 
	{
        if (a[i]>='a' && a[i]<= 'z')
		{
            a[i] = a[i] - 32;
        }
    }
    printf("String conver in Lowercase: %s\n", a);
    printf("String convert in Lowercase: %s\n", a);

}

