#include <stdio.h>
#include <math.h>   

int prime_fac(int x)
{
    int div = 2;
    int cpy = x;
    while (div<= x)
    if (x % div == 0){       
        printf("%d is a prime factor of %d\n",div,cpy);
        x = x / div ;
    }
        
    else
        div += 1;
    
    return 0;
}

int main()
{
    int y;
    printf("enter the number whose prime facotr you want to find: ");
    scanf("%d",&y);
    prime_fac(y);
}