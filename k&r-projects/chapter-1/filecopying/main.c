#include <stdio.h>

/* The simplest version of taking an input and giving an output
    we use int because we need to store 
    the getchar() function returns something called End Of File(EOF) and we need something big enough to store our input+EOF

*/
int main(){
    int c; 
    c = getchar();
    while (c != EOF){
        int x = EOF;
        putchar(1+x);
        c = getchar();
    };
}