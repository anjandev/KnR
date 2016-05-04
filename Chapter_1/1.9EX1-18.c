// Removes Trailing blanks and tabs from each line of input and deletes blank lines
// Page 31

#include <stdio.h>
#define BUFFER_SIZE 80

int get_line(char s[], int lim);

int main(){
    
    char buffer[BUFFER_SIZE];

    while(get_line(buffer, BUFFER_SIZE) > 0){
        printf("%s", buffer);
    }

}

int get_line(char s[], int lim){

    int c;
    int i = 0;
        
    while(i < lim - 1 && (c = getchar()) != EOF && c != '\n'){
        if(c != '\t'){
            s[i] = c;
            i++;
        }
    }

    // return 0 (effectively not printing the line) if only newline
    if(c == '\n' && i == 0){
        s[i] = '\0';
        return 1;
    }

    if(c == '\n'){
        s[i] = c;
        i++;
    }

    s[i] = '\0';
    
    // i - 2 because the last 2 items in the list are "\0" and "\n" so I am checking for trailing " " 
    // before the "\n"

    while(s[i - 2] == ' '){
        // If it has a trailing " ", then move the "\n" and "\0" one space to the left.
        // Do while there are no more trailing " "
        s[i - 2] = '\n';
        s[i - 1] = '\0';
        i--;
    }

    return i;
}
