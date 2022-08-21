#include <stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter the range \n");
    scanf("%d",&n);
    i=0;
    sum=0;
    while (i<n)
    {
        sum=sum+i;
        i++;
    }
    printf("the sum is %d",sum);
    return 0;
}
