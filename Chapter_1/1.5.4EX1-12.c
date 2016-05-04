#include <stdio.h>

#define IN 1
#define OUT 0

int main(){

    int c;

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            printf("\n");
        }
        else{
            putchar(c);
        }

    }

    return 0;
}
