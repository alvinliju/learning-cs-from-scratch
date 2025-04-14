#include <stdio.h>
 #include <stdlib.h>


int main() {
  char *data;
  int bytes = (1024*1024);
  data = (char *) malloc(1024*1024);
  for(int i=0; i<bytes; i++){
    data[i]= (char) (i%100);
    printf("%c ", data[i]);
  }  
  printf("Program done\n");
  return 0;
}