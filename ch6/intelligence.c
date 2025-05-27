#include <stdio.h>
#include <math.h>
int main()
{
    int y=1;
    float x=5.5,i;
    do{
        i=2+(y+0.5*x);
        printf("y=%d x=%f i=%f\n",y,x,i);
        y+=1;
        x+=0.5;
    }while(x<12.5 && y<6);
            
        
}