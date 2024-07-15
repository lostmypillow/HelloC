#include <stdio.h>

int main(void)
{
    int x, twenties, tens, fives, ones;
    printf("Enter a dollar amount: ");
    scanf("%d", &x);
    twenties = x/20;
    tens = (x-(twenties*20))/10;
    fives = (x -(twenties * 20 + tens * 10))/5;
    ones = x - (twenties * 20 + tens * 10 + fives * 5);
    printf("$20 dollar bills: %d\n", twenties);
    printf("$10 dollar bills: %d\n", tens);
    printf("$5 dollar bills: %d\n", fives);
    printf("$1 dollar bills: %d\n", ones);
    return 0;
}