#include <stdio.h>
#include <math.h>
int main()
{
    int i=2;
    float x,sum=0;
    printf("enter the value of x: ");
    scanf("%f",&x);
    sum+=x-1/x;
    while(i<7)
    {
        sum+=0.5*pow((x-1/x),i);
        i+=1;
    }
    printf("%f\n",sum);

}