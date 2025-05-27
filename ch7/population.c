#include <stdio.h>
#include <math.h>

int main( )
{
    int i = 1,sum  = 0;
    float pop = 1000000;
    while(i<10)
    {
        sum+=pop*0.1; 
        printf("%d",pop);
        i+=1;
    }
}