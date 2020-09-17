#include <stdio.h>
#define BASE 4
#define HEIGHT 3

int main(void){
    int base;
    int height;

    printf("Enter a int for the base of the triangle: ");
    scanf("%d", &base);
    printf("Enter a int for the height: ");
    scanf("%d", &height);
    float area = base * height / 2;
    printf("Area of triangle is %f", area);
    return 0;
}