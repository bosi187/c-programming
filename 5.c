#include <stdio.h>
int main()
{
    int a,b,t;
    a=3;
    b=4;
    printf("%d",a);
    printf("%d",b);
    t=a;
    a=b;
    b=t;
    printf("%d",a);
    printf("%d",b);
    return 0;
}
