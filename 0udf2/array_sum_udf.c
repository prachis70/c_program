//Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
//Enter array elements:
//a[0] = 6
//a[1] = 4
//a[2] = 1
//a[3] = 5
//a[4] = 2
int print (int p[])
{
	int n;
	printf("Enter the any num .");
	scanf("%d",&n);
	int a[n];
	int i;
	int sum=0;
	for(i=0;i<n;i++)
	{
	   printf("Enter the num.[%d]",i);
	   scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
	return sum;
}

main()
{
    int sum;
	print(sum);
}