// Prints all lines longer than 80 characters
// Page 31

#include <stdio.h>
#define MIN_LENGTH_TO_OUTPUT 80

int main(){
    char buffer[MIN_LENGTH_TO_OUTPUT + 1];
    int length;


    while((length = get_line(buffer, MIN_LENGTH_TO_OUTPUT + 1)) > 0){

        if(length == 80 && buffer[MIN_LENGTH_TO_OUTPUT - 1] != '\n')
    }


    return 0;
}

int get_line(char s[], int lim){
    
    int c, i;

    for(i = 0; (c = getchar()) != EOF && c != '\n' && i < lim - 1; i++){
        s[i] = c;
    }
    if(c == '\n'){
        s[i] = '\n';
        i++;
    }
    s[i] = '\0';

    return i;
}
