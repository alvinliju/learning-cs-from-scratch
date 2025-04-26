#include <stdio.h>
#define TAB 2

int main(){
    int c,count=0;
    char line;
    while((c=getchar()) != EOF){
        if(c == '\n'){
            putchar(c);
            count=0;
            continue;
        }

       

        if(c == ' ' || c == '\t'){
            count = count+1;
 
        }else{

            if(count > 0){
                int spaces = count%TAB;
                int tabs = count/TAB;
                

                for(int i=0; i < tabs; i++){
                    putchar('\t');
                }
                for(int i=0; i < spaces; i++){
                    putchar(' ');
                }
            }
               

            putchar(c);
            count = 0;
        }
       
    }

}