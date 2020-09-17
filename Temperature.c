/* Daniel Nicolas
 * Temperature assignment - convert temperatures between 
 * Fahrenheit, Celcius, and Kelvin
 */ 

#include <stdio.h>

int main(void){
    double temp, celcius, faren, kelvin;
    char unitOfTemp; // used to identify which scale user is using (C/F/K)

    printf("What unit of temperature are you using? (C/F/K) \n");
    scanf("%ch", &unitOfTemp);
    printf("Enter the temperature: \n");
    scanf("%lf", &temp);

    switch(unitOfTemp){
        case 'C': // converts celcius to fahrenheit and kelvin
        printf("%.3lf %c converts to: \n", temp, unitOfTemp );
        faren = (temp * 1.8) + 32;
        kelvin = temp + 273.15;
        printf("\t%.3f F \n", faren);
        printf("\t%.3f K \n", kelvin);
        break;
        case 'F':// converts farenheit to celcius and kelvin
        printf("%.3lf %c converts to: \n", temp, unitOfTemp );
        celcius = (temp - 32) / 1.8;
        kelvin =  (temp - 32) * (5.0/9.0) + 273.15;
        printf("\t%.3f C \n", celcius);
        printf("\t%.3f K \n", kelvin);
        break;
        case 'K': // converts kelvin to celcius and fahrenheit
        printf("%.3lf %c converts to: \n", temp, unitOfTemp );
        celcius = temp - 273.15;
        faren = (temp -273.15) * 1.8 + 32;
        printf("\t%.3f C \n", celcius);
        printf("\t%.3f F \n", faren);
        break;
        default: // incase user inputs invalid input for temp
        printf("Invalid temperature scale \n.");
        return 1; 
    }
    return 0;
}