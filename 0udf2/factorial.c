int  into(int p)
{
	if(p==1)
	{
		return 1;
	}
	return p*into(p-1);
}
void main()
{
	int p=5;
	printf("enter.");
	scanf("%d",&p);
	printf("factorial is.%d",into(p));
}