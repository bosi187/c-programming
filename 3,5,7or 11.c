#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);

    if(n%3==0)
    {
        printf("%d divisible by 3 \n",n);
    }
        if(n%5==0)
        {
            printf("%d divisible by 5 \n",n);
        }
        else
        {
            if(n%7==0)
            {
                printf("%d divisible by 7 \n",n);
            }
            else
            {
                if(n%11==0)
                {
                    printf("%d divisible by 11 \n",n);
                }
            }
        }
        else
        {
            printf("%d not divisible by 3,5,7,11 \n",n);
        }
        return 0;
}
