// Fahrenheit to celsius converter with a function

#include <stdio.h>
#define MAX_FAHRENHEIT 300
#define MIN_FAHRENHEIT 0
#define STEP  20

float farhenheitToCelsius(int farhenheit);

int main(){

    for(int farhenheit = MIN_FAHRENHEIT; farhenheit <= MAX_FAHRENHEIT; farhenheit = farhenheit + STEP){
        printf("%3d %3d\n", farhenheit, fahrenheitToCelsius(farhenheit));
    }
    

    return 0;
}

int fahrenheitToCelsius(int farhenheit){
    
    return 5 * (farhenheit - 32) / 9;

}
