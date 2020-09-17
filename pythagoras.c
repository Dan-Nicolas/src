#include <stdio.h>

int main(void){
    int b1;
    int hypot;
    int perp;
    int x;

    printf("What is the base of the triangle?: \n");
    scanf("%d", &b1);
    printf("What is the perpendicular of the triangle?: \n");
    scanf("%d", &perp);
    printf("What is the hypotnuse of the triangle?: \n");
    scanf("%d", &hypot);

    printf("Base: %d, Perp: %d, Hypotnuse: %d \n", b1, perp, hypot);


    x = ((b1*b1)+(perp*perp)) ;
    if ((hypot*hypot) == x)
    {
       printf("This is a right triangle\n");
    }else
    {
        printf("This is not a right triangle\n");
    }
    
}