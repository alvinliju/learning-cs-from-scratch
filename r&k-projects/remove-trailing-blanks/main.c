
/* Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input, and
 to delete entirely blank lines. */

#include <stdio.h>
#define MAXLENGTH 100
int main(){
    int c, i=0, j=0, hasNonWhitespace=0;;
    char line[MAXLENGTH];
    while((c = getchar()) != EOF){
        if(c != '\n'){
            line[i] = c;
            i++;
        }else if(c == '\n'){
            hasNonWhitespace = 0;
            for(int j = 0; j<i; j++){
                if (line[j] != ' ' && line[j] != '\t'){
                    hasNonWhitespace=1;
                    break;
                    
                }
            }

            if(hasNonWhitespace){
                int end = i-1;
                while(end>=0 && (line[end] == ' ' || line[end] == '\t')){
                    end--;
                }

                line[end + 1] = '\n';
                line[end+2] = '\0';
                printf("%s", line);
                
            }
            hasNonWhitespace = 0;

            i=0;

        }

    }
    return 0;
}