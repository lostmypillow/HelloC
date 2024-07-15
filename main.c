#include <stdio.h>
#include <time.h>
#define INCHES_PER_POUND 166
#define RECIPROCAL_OF_PI (1.0f/3.14159f)

int main() {
    // Write C code here
    clock_t begin = clock();
    int height = 8, length = 12, width = 10, x;
    printf("Height: %d\nLength: %d\nWidth: %d\nHeight multiplied by width: %d\n", height, length, width, height*width);
    printf("%d\n", 12);
    printf("yolo\n");
    
    printf("Type a number: ");
    scanf("%d", &x);
    printf("You typed '%d'\n", x);
    printf("reciprocal: %d\n", RECIPROCAL_OF_PI);
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", time_spent);

    return 0;
}