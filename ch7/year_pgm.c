#include <stdio.h>
#include <math.h>
int main( )
{
    int year,leap,remainder,total_days;
    printf("enter the year");
    scanf("%d",&year);
    leap = (year - 1)/4 - (year - 1)/100 + (year - 1)/400;
    total_days=leap+(year-1)*365;
    remainder =total_days %7;

    if (remainder==0)
        printf("monday");
    else
        if (remainder==1)
            printf("tuesday");
        else
            if(remainder==2)
                printf("wednesday");
            else
                if(remainder==3)
                    printf("thursday");
                else
                    if (remainder==4)
                        printf("friday");
                    else
                        if (remainder==5)
                            printf("saturday");
                        else 
                            if(remainder==6)
                                printf("sunday");

             
}  