#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter original x: ");
    scanf("%d", &x);
    printf("Result: %d\n", 3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6);
     printf("Result: %d\n", (((((3*x)+2)*x-5)*x-1)*x+7)*x-6);
    return 0;
}