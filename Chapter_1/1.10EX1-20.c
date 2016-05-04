// detab, replaces tabs input with the proper number of blanks to space to the next tab stop.
// page 34

#include <stdio.h>

int main(){
    int c;

    while((c = getchar()) != EOF){
        if(c == '\t'){
            printf("   ");
        }
        else{
            putchar(c);
        }
    }


    return 0;
}
