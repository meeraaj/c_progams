#include <stdio.h>
#include <math.h>   

int leap_year(int x)
{

    if( x % 4 == 0 || (x % 400 == 0 && x % 100 == 0))
    {
        printf("year %d is a leap year\n ", x);

    }
    return 0;
}
 
int main()
{
    int y;
    printf("enter the year: ");
    scanf("%d", &y);
    leap_year(y);
}