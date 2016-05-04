#include <stdio.h>

int main(){

    int c;
    int alreadyOneSpace = 0;

    while((c = getchar()) != EOF){
        if(c == ' ' && alreadyOneSpace){
            ;
        }
        else if(c == ' ' && !alreadyOneSpace){
            alreadyOneSpace = 1;
            printf("%c", c);
        }
        else{
            alreadyOneSpace = 0;
            // To print char use %c
            printf("%c", c);
        }
    }

    return 0;
}
