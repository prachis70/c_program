#include <stdio.h>
main()
{
    int i, n, f=1;
    printf("input a number:");
    scanf("%d", &n);

    for(i=n; i>=1; i--)
    {
      f = f * i;
    }
    printf("the factorial of is: %d\n", f);
}
