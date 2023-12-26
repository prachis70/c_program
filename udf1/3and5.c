//.2 Write a Program to check if a given number is divisible by both 3 & and 5 or not by using UDF.
void p()
{
	int p;
	printf("Enter the any num.");
	scanf("%d",&p);
	if(p%3==0)
	{
		printf("divisival by 3and5.\n");
	}
	else if(p%5==0)
	{
		printf("divisival by 5.\n");
	}
	else
	{
		printf("divisival not 3and5.\n");
	}	
}
  main()
{
p();	
}