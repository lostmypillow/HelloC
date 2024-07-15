#include <stdio.h>
#include <time.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
    clock_t begin = clock();
    
    
    float fa;
    printf("Enter Fahrenheit: ");
    scanf("%f", &fa);
    printf("Converted to Celsius: %.1f\n", (fa-FREEZING_PT)*SCALE_FACTOR);
    
    
    
    
    
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", time_spent);

    return 0;
}