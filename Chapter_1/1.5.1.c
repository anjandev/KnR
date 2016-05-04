#include <stdio.h>

/* copy input to output; First version */

/*int main (){
/*    int c;
/*
/*    c = getchar();
/*    while(c != EOF){
/*        putchar(c);
/*        c= getchar();
/*    }
/*
/*    return 0;
/*}* / 
 

/* copy input to output; Second version */

int main(){
    int c;

    while((c = getchar()) != EOF){
        getchar();
    }
}

