// Program to make histogram of word lengths
// Note: this is the same as my actual long input line program because I programmed it to accept
// lines of arbritary length when I started

#include <stdio.h>

int *copyArray(int *oldArray, int oldSize, int newSize){
} 

int main(){

    int c, lengthOfCurrentWord, maxWordLength;
    
    maxWordLength = 1;
    int wordLengths[maxWordLength];
    // index 0 represents word length of 1
    wordLengths[0] = 0;
    
    lengthOfCurrentWord = 0;

    while((c = getchar()) != EOF){
        if (c == '\n' || c == '\t' || c == ' '){
            if (lengthOfCurrentWord == 0){
                ;
            }
            else if (lengthOfCurrentWord <= maxWordLength){
                // subtract one because index 0 represents word length of 1
                ++wordLengths[lengthOfCurrentWord - 1];
                lengthOfCurrentWord = 0;
            }
            else if (lengthOfCurrentWord > maxWordLength){
                int tempArray[maxWordLength];

                for(int i = 0; i < maxWordLength; i++){
                    tempArray[i] = wordLengths[i];
                }
                wordLengths[lengthOfCurrentWord];

                for(int i = 0; i < maxWordLength; i++){
                    wordLengths[i] = tempArray[i];
                }

                for(int i = maxWordLength; i < lengthOfCurrentWord; i++){
                    wordLengths[i] = 0;
                }
                
                maxWordLength = lengthOfCurrentWord;
                ++wordLengths[lengthOfCurrentWord - 1];
                lengthOfCurrentWord = 0;
            }
        }
        else{
            ++lengthOfCurrentWord;
        }
        
    }

    printf("\n");

    // Print horizontal bars

    for(int i = 0; i < maxWordLength; i++){
        printf("%d Letters:", i + 1);
        for(int dashesPrinted = 0; dashesPrinted < wordLengths[i]; dashesPrinted++){
            printf("-");
        }
        printf("\n");
    }

    // Print Verticle bars
    // I didnt do this lol. Will come back
    
    printf("\n");

    return 0;
}
