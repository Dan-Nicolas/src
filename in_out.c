#include <stdio.h>

int main(void){
    int a = 0;
    int b = 0;
    float c = 0.0;

    printf("Enter a integer number: ");
    scanf("%d", &a);

    printf("Enter one int and one float: ");
    scanf("%d %f", &b, &c);
    printf("Int = %d and float = %f", b,c);

    printf("%d + %d =%d\n ", a,b,a+b);
}