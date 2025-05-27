#include <stdio.h>
#include <math.h>

int sum_of_digits(int num)
{
    int sum_cube = 0;
    while(num > 0)
    {
        int remainder = num % 10;
        sum_cube += pow(remainder,3);
        num = num / 10;      
    }
    return sum_cube;
}


int main( )
{
    int i;
    for(i=1; i < 500; i++)
    {
        int sum = sum_of_digits(i);
        if (sum= i)
            printf("this number is an amstrong number: %d\n",i);       
    }
}