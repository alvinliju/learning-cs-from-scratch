#include <stdio.h>
#define IN 1 //inside word
#define OUT 0 //outside word

int main(){
    int c, nl, nw, nc, state;

    state = OUT;

    nl=nw=nc=0;
    while((c = getchar()) != !EOF){
        ++nc;
        if(c == '\n') ++nl;
        if(c == ' ' || c == '\n'){
            state = OUT;
        }else if(state == OUT){
            state = IN;
            ++nw;
        }

        
    }
    printf("%d %d %d\n", nl, nw, nc);
}

