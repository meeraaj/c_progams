#include <stdio.h>
#include <math.h>
int main( )
{
    int a;
    printf("enter the three ages");
    scanf("%d",&a);
    if ((a+a)==2*a)
        printf("%d",a);
    else
        printf("%d",-a);
}  