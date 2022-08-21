#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter scored marks : ");
    scanf("%d",&n);
    i=n/10;
    if (i>=9&&10)
    {
        printf(" O grade \n");
    }
    else if (i>=8)
    {
        printf(" E grade \n");
    }
    else if (i>=7)
    {
        printf(" A grade \n");
    }
    else if (i>=6)
    {
        printf(" B grade \n");
    }
    else if (i>=5)
    {
        printf(" C grade \n");
    }
    else if (i>=4)
    {
        printf(" D grade \n");
    }
    else if (i>=3&&2&&1)
    {
        printf(" F grade \n");
    }
    else
    {
        printf(" S grade \n");
    }
    return 0;

}
