// program that reverses its input one line at a time
// page 31

#include <stdio.h>
#define BUFFER_SIZE 1000

void copy(char from[], char to[]);
void reverse(char forwardArr[]);
int get_line(char s[], int lim);
int main(){
    
    char buffer[BUFFER_SIZE];

    while(get_line(buffer, BUFFER_SIZE) > 0){
        reverse(buffer);
        printf("%s", buffer);
    }


    return 0;
}

int get_line(char s[], int lim){
    
    int i, c;

    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++){
        s[i] = c;
    }
    if(c == '\n'){
        s[i] = '\n';
        i++;
    }
    s[i] = '\0';

    return i;
}

void reverse(char forwardArr[]){
    char backwardArr[BUFFER_SIZE];

    int i = 0;

    while(forwardArr[i] != '\0'){
        i++;
    }

    int totalLengthOfForwardArray = i;

    if((i - 2) < 0){
        return;
    }


    int needsNewLine = 0;
    int forwardArrayIndex = 0;

    // get to character before \n and \0
    if(forwardArr[i-1] == '\n'){
        forwardArrayIndex = totalLengthOfForwardArray - 2;
    }
    else{
        forwardArrayIndex = totalLengthOfForwardArray - 1;
    }

    int backwardArrayIndex = 0;

    while(forwardArrayIndex >= 0){
        backwardArr[backwardArrayIndex] = forwardArr[forwardArrayIndex];
        forwardArrayIndex--;
        backwardArrayIndex++;
    }

    backwardArr[backwardArrayIndex++] = '\0';
    copy(backwardArr, forwardArr);
}

void copy(char from[], char to[]){
    for(int i = 0; from[i] != '\0'; i++){
        to[i] = from[i];
    }
}
