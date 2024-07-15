#include <stdio.h>
int main(void)
{
    float r = 10.0f, rFromInput;
    printf("Volume: %f\n", (4.0f/3.0f)*3.14f*r*r*r);
    printf("Enter a number: ");
    scanf("%f", &rFromInput);
    printf("Input Volume: %f\n", (4.0f/3.0f)*3.14f*r*r*r);
    return 0;
}