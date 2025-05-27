#include <stdio.h>
#include <math.h>
int main()
{
    float x,y,r,z;
    printf("enter the values:");
    scanf("%f %f",&x,&y);
    r=sqrt(x*x+y*y);
    z=atan(y/x);
    printf("%f %f",r,z);
    return 0;
}