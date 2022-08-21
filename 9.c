#include <stdio.h>
int main ()
{
    int i,n,sum;
    printf("Enter the range : ");
    scanf("%d",&n);
    for(i=0,sum=0;i<n;i++)
    {
        printf("%d\n",i);
        sum+=i;
    }
    printf("sum=%d\n",sum);
    return 0;
}
