#include <stdio.h>
#include <math.h>
int main()
{
    int a,b=0;
    printf("enter a 5 digit number:");
    scanf("%d",&a);
    while (a>0)
    {
        b+=a%10;
        a=a/10;
    }
    
        
    printf("%d",b);
    return 0;

}