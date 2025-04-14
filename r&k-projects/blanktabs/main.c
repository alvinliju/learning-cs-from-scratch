#include <stdio.h>
/*
Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.

Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each
backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
unambiguous way. 
*/

int main(){
    int c, tb;
    while((c = getchar()) != EOF){

        char x = c;

        tb = 0;
        if (c == '\t' || tb>3){
            tb++;
            x = x+"\t";
        };

        putchar(x);
    };
}