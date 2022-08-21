#include <stdio.h>
int main()
{
    int HOURS,DAYS,WEEKS,YEARS;
    printf("Enter days: ");
    scanf("%d",&DAYS);
    YEARS=(DAYS / 365);
    WEEKS = (DAYS % 365 ) / 7;
    DAYS = DAYS - ((YEARS * 365)+(WEEKS * 7));
    HOURS = (DAYS * 24);
    printf("YEARS: %d\n",YEARS);
    printf("WEEKS: %d\n",WEEKS);
    printf("DAYS: %d\n",DAYS);
    printf("HOURS: %d\n",HOURS);
    return 0;
}
