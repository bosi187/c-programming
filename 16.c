#include <stdio.h>
int main()
{
    int a,b,t;
    printf("enter number a : ");
    scanf("%d",&a);
    printf("enter number b : ");
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;
    printf("a = %d\n",a);
    printf("b = %d",b);
    return 0;
}
