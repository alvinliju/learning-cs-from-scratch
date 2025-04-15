/*
Exercise 1-19. 
Write a function reverse(s) that reverses the character string s. Use it to
write a program that reverses its input a line at a time.
*/

#include <stdio.h>
#define LIMIT 100

int main(){
    int c, lineLength=0, i=0;;
    char line[LIMIT];
    char revLine[LIMIT];
    int x = 0;

    while((c = getchar()) != EOF){
        if(c != '\n' && i < LIMIT){
            line[i] = c; 
            i++;
        }else{
            for(int f=0; f<i; f++){
                putchar(line[f]);
            }
            putchar('\n');
            
            line[i]='\0';

            x = 0;
            for(int j=i-1; j>=0; j--){
                revLine[x] = line[j];
                x++;
            }
            revLine[x] = '\0'; 
            printf("%s \n", revLine);

            i = 0;
            x = 0;

        }

    }
}