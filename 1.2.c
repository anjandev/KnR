#include <stdio.h>

/* Print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */
int main(){
    // changing integer to float to get accurate numbers
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    fahr = lower;

    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        /* %d indicates a integer argument variables are substituted for %d*/
        /* printf("%d\t%d\n", fahr, celsius);*/

        /* to get each line looking nicier define number of characters */
        //printf("%3d %6d\n", fahr, celsius);
        
        // says print 3 whole number digits and no decimals
        // other says print 6 whole and 1 decimal number
        printf("%3.0f %6.1f\n", fahr, celsius);

        fahr = fahr + step;
    }

}
