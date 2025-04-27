/*
Exercise 1-24. Write a program to check a C program for rudimentary syntax errors like
unmatched parentheses, brackets and braces. Don't forget about quotes, both single and
double, escape sequences, and comments. (This program is hard if you do it in full
generality.)

 */



#include <stdio.h>
#include <string.h>
int main(){

	int par=0;
	FILE *fptr;
	fptr = fopen("xyz.c", "r");

	char fileContent[100];
        while(fgets(fileContent, 100, fptr)){
		 char start[0] = "(";
		 char end[0] = ")";
		 char *anotherptr;
                 char *ptr = strchr(fileContent, '(');
		 if(ptr != NULL){
			anotherptr = strchr(fileContent, ')');
			if(anotherptr == NULL){
				printf("%s", "Missing fuckkk");
				break;
			}
		}
		 printf("%s", fileContent); 
         }

	fclose(fptr);
  

}
