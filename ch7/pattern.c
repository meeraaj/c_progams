#include<stdio.h>
#include<math.h>

/*int main()
{
    int i=5,j=1,k=1;
    
    while(i>0)
    {
        printf(" ");

        while(j<5)
        {
            while(k<=j){
                printf("%d",k);
                k+=1;
            }
            printf("\n");
            j+=1;
        }
        printf("\n");
        i-=1;
    }

}*/

#include <stdio.h>

int main() {
    int rows = 4;
    int num = 1;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf("   ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%-5d", num++);
        }

        printf("\n");
    }

    return 0;
}
