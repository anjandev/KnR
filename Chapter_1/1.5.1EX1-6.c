#include <stdio.h>

int main(){

    int c = getchar();

    printf("(c = getchar()) != EOF was evaluated to: %d \n", (c = getchar()) != EOF);

    return 0;
}
