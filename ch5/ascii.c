#include <stdio.h>
#include <math.h>
int main( )
{
    int i=0;
    printf("ascii_value,char\n");
    while(i<=127)
    {    
        printf("%d,%c\n",i,i);
        i=i+1;
    }

}