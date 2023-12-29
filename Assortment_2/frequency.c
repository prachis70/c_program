//3. Write a program in C to count the frequency of each element of an array.
#include<stdio.h>
main()
{
    int n;
    printf("Enter the array:");
    scanf("%d",&n);
    int a[n];
    int f=1;
    int i,j;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for (i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++) 
        {
          if (a[i]==a[j]) 
           {
            f++;
            a[j]=-1;
          }
        }
        if (a[i]!=-1) 
        {
            printf("%d\n",a[i],f);
        }
    }
}
