// Print the number of times a character occured in the input

#include <stdio.h>
// '~' is the last character in ascii table and ` ` is the first character
// defined are their respected decimal ascii values
#define FIRST_CHAR 32
#define LAST_CHAR 126

int main(){
    int c;
    
    int timesCharacterPrinted[LAST_CHAR - FIRST_CHAR];

    // REMEMBER TO CLEAR OUT ARRAY
    for(int i = 0; i < (LAST_CHAR - FIRST_CHAR); i++){
        timesCharacterPrinted[i] = 0;
    }

    while((c = getchar()) != EOF){
        if (c >= FIRST_CHAR && c <= LAST_CHAR){
            ++timesCharacterPrinted[c - FIRST_CHAR];
        }
    }

    printf("\n");

    for(int i = 0; i < (LAST_CHAR - FIRST_CHAR); i++){
        if(timesCharacterPrinted[i] != 0){
            putchar(i + FIRST_CHAR);
            printf(": ");
            for(int dashesPrinted = 0; dashesPrinted < timesCharacterPrinted[i]; dashesPrinted++){
                printf("-");
            }
            printf("\n");
        }
    }


    return 0;
}
