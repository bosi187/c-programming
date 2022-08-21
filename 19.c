#include <stdio.h>
int main ()
{
    int x,y;
    printf(" X = ");
    scanf("%d",&x);
    printf("Y = ");
    scanf("%d",&y);
    if (x<y)
    {
        printf("x is smaller then y %d\n");
    }
    else if (x==y)
    {
        printf("x is equal to y %d\n");
    }
    else
    {
        printf("y is smaller then x %d\n");
    }
    return 0;
}
