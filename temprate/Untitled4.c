int main()
{
    int n, sum=0, fD, lD;
    printf("Enter number to find sum of first and last digit =>");
    scanf("%d", &n);
    lD = n % 10;
    while(n >= 10)
    {
        n = n / 10;
    }
    fD = n;
    sum = fD + lD;
    printf("Sum of first and last digit => %d", sum);
    return 0;
}
