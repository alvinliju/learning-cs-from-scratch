#include <stdio.h>

int main(){
    int c;

    while((c = getchar()) != EOF){
        char x=c;
        if (c == ' '){
            x = '\n';
        }

        putchar(x);
    }
}