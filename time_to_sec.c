/* Daniel Nicolas
 * Time to seconds Assignment
 * Converts hours, minutes and seconds to total amount of seconds
*/

#include <stdio.h>
/* converts a time interval specified in hours, minutes 
 * and seconds to total number of seconds 
 * @param - hours, minutes, seconds,
 * minutes and seconds in range of 0-60 including 0 and 60
 */ 
unsigned int time_to_sec(unsigned int hours, unsigned int minutes, 
                            unsigned int seconds ){
    int convert_hours = hours;
    int convert_minutes = minutes;
    int sec = seconds;
    int total_seconds;
    
    convert_hours = hours * 3600;
    convert_minutes = minutes * 60;

    total_seconds = convert_hours + convert_minutes + seconds;
    return total_seconds;
}
/* prints a formatted representation of the calculation
 * @param - hours, minutes, seconds
 * Function will write out the calculation in standard output
*/
void format_seconds(unsigned int hours, unsigned int minutes, 
                        unsigned int seconds){
    int format_hours = hours;
    int format_min = minutes;
    int format_sec = seconds;

    if(format_min < 0 || format_min > 60){ // makes sure minutes is in betwween 0-60
        while (format_min < 0 || format_min > 60){
            printf("Invalid input. Please enter an int ranging from 0-60.\n");
            printf("Please enter the number of minutes in the appropiate range\n");
            scanf("%d", &format_min);
        }
        
    }
    if(format_sec < 0|| format_sec > 60){// makes sure seconds is in betwween 0-60
        while (format_sec < 0 || format_sec > 60){
            printf("Invalid input. Please enter an int ranging from 0-60.\n");
            printf("Please enter the number of seconds in the appropiate range\n");
            scanf("%d", &format_sec);
        }
        
    }
    int total = time_to_sec(format_hours,format_min, format_sec);
    printf("%d, hours, %d minutes, and %d seconds is equal to %d seconds. \n", format_hours, format_min, format_sec, total);
}

int main(void) {
    format_seconds(4, 13, 20);
    format_seconds(8, 0, 0);
    format_seconds(1, 30, 0);
    format_seconds(7,70,100); // used to show that minutes and seconds need to be in the appropiate range (0-60)
}