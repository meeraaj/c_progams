#include <stdio.h>
#include <math.h>
int main()
{
    int i = 2, j = 3, k, l ,c;
    float a, b ;
    k = i / j * j ;
    l = j / i * i ;
    a = i / j * j ;
    b = j / i * i ;
    c=2%3;
    printf( "%d %d %f %f", k, l, a, b ) ;
    printf("%d",c);
    return 0;
}