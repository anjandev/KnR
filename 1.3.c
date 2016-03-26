#include <stdio.h>

/* print Fahrenheit-Celcius table */
int main(){
    int fahr;

    int const LAST_FAHR = 0;
    int const FIRST_FAHR = 300;
    int const STEP = 20;

    for (fahr = FIRST_FAHR; fahr >= LAST_FAHR; fahr= fahr - STEP){
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}
