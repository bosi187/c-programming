#include <stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    if(x%3==0)
    {
        printf("\nDivisible by 3");
    }
    else
    {
        printf("\nNot divisible by 3");
    }
    if(x%5==0)
    {
        printf("\nDivisible by 5");
    }
    else
    {
        printf("\nNot divisible by 5");
    }
    if(x%7==0)
    {
        printf("\nDivisible by 7");
    }
    else
    {
        printf("\nNot divisible by 7");
    }
    if(x%11==0)
    {
        printf("\nDivisible by 11");
    }
    else
    {
        printf("\nNot divisible by 11");
    }
    return 0;
}
