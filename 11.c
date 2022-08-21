#include <stdio.h>
int main ()
{
    int i,n;
    printf("Enter a range : ");
    scanf("%d",&n);
    i=0;
    XYZ:
    if(i<n)
    {
        printf("INDIA \n");
        i++;
        goto XYZ;
    }
    return 0;
}
