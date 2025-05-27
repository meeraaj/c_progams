#include <stdio.h>
#include <math.h>
int main( )
{
    double x=1.1;
    while(x==1.1)
    {
        printf("%f\n",x);
        x=x-0.1;
    }
}