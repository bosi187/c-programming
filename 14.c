#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number  : ");
    scanf("%d",&n);
    if(n/2==1 && n%2==0|| n/3==1 && n%3==0 || n/5==1 && n%5==0 || n/7==1 && n%7==0)
    {
        printf("%d is a PRIME number",n);
    }
    else
    {
        printf("%d is NOT a PRIME number",n);
    }
    return 0;
}
