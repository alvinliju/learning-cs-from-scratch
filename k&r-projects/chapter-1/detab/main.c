#include <stdlib.h>
#include <stdio.h>
#define TAB 2
#define MAXLEN 50

int main(){
    char line[MAXLEN];
    int c;
    while((c = getchar()) != EOF){
        if(c == '\t'){
            for(int i=0;i<=TAB; i++){
                putchar(' ');
            }
        }else {
            putchar(c);
        }

    }
}