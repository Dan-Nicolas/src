/* Daniel Nicolas
 * Circle Assignment - calculate the diameter, circumference
 * and area, radius is entered by user 
 */
#include <stdio.h>
#define PI 3.14151926

// calculates the circles diameter using the radius as parameter
float getDiameter(float radius){
    float diameter = radius * 2;
    return diameter;
}
// calculates the area using the radius as a parameter
float getArea(float radius){
    float area = PI * radius*radius;
    return area;
}
// calculates the circumference usinf the radius as a parameter
float getCircumference(float radius){
    float circumference = 2 * PI * radius;
    return circumference;
}
int main(){ // main program
    float radius;    
    printf("Enter radius: ");
    scanf("%f", &radius);
    if(radius <= 0){
        printf("Invlaid radius. Must be greater than zero.");
        return 1;
    }
    float circum = getCircumference(radius);
    float area = getArea(radius);
    float diameter = getDiameter(radius);

    printf("A circle with a radius of %.3lf: \n", radius);
    printf("\t Diameter: %.3f \n", diameter);
    printf("\t Area: %.3f \n", area);
    printf("\t Circumference: %.3f \n", circum);
    
    return 0;
}