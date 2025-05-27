#include <stdio.h>

void print_spaces(int count)
{
    for(int i=0; i<count; i++)
    {
        printf(" ");
    }
}

int main()
{
    int a = 10;
    int b = 6;
    printf("a=%d\n",a);
    printf("a=%-5d b=%d\n",a,b);
    print_spaces(10);
    printf(":\n");
}