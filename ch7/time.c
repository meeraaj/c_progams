#include<stdio.h>
#include<math.h>

int main()
{
    int time;
    for (time=1;time<=12;time++){
        if (time==12){
            printf("12 noon\n");
            break;}
        printf("%d",time);
        printf("AM\n");
        
    }
    for (time=1;time<=12;time++){
        if (time==12){
            printf("12 midnight\n");
            break;}
        printf("%d",time);
        printf("PM\n");
        
    }
    

}