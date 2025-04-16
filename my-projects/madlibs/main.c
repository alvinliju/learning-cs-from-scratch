#include <stdio.h>
/*
Create a cli game where there is a fixed sentence and we ask user for one verb and one noun and then add that to a sentence and display it back.
*/

int main(){
    char verb[20], noun[20];
    printf("Enter a noun:"); scanf("%19s", noun);
    printf("Enter a verb:"); scanf("%19s", verb);
    printf("The dog %s and %s \n",noun, verb);
}