#include <stdio.h>
int main(void)
{
    float originalAmount;
    printf("Enter original amount: ");
    scanf("%f", &originalAmount);
    printf("With tax: %.2f", (originalAmount*1.05));
    return 0;
}