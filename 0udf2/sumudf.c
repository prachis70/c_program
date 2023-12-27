int into(int sum)
{
	if(sum==0)
	{
		return 0;
	}
	return sum+into(sum-1);
}
void main()
{
	int sum;
	printf("enter.");
	scanf("%d",&sum);
	printf("factorial is.%d",into(sum));
}