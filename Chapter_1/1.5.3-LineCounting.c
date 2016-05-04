#include <stdio.h>

int main(){
    
    int c, n1;

    n1 = 0;
    while((c = getchar()) != EOF){
        // '' represent integer value of ascii text
        if (c == '\n'){
            ++n1;
        }
    }

    printf("%d\n", n1);

    return 0;
}
