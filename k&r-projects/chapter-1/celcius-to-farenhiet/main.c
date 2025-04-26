// oC=(5/9)(oF-32)
// convert celcius to farenhiet
// 1. take the celcius value form the user
// 2. put the value in the formula eg: Celcius=(5/9)(Farenhiet-32)
#include <stdio.h>
#define LOWER 0
#define  UPPER 300
#define STEP 20

void printFarenTOCelcius(){
    float celcius, faren;
    
    for(int i=UPPER; i>=LOWER; i=i-STEP){
        faren = i;
        celcius = ((5)*(faren-32)/9);
        printf("farenhiet:%f, -->  celcius:%f \n",faren, celcius);
    }
}


int main(){
    printFarenTOCelcius();
}

