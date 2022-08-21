#include <stdio.h>
int main()
{
    char n;
    printf("Enter a alphabet : ");
    scanf("%c",&n);

    if(n>='A'&& n<='Z')
    {
        printf("capital alphabet");
    }
    else if (n>='a' && n<='z' )
    {
        printf("small alphabet");
    }
    else
    {
        printf("invalid alphabet");
    }
    return 0;
}
