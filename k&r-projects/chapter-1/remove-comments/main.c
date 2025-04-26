/*
Exercise 1-23. Write a program to remove all comments from a C program. Don't forget to
handle quoted strings and character constants properly. C comments don't nest. 

breakdown:
- read a file line by line
- do a regex on the line '\/\/[^\n\r]+?(?:\*\)|[\n\r])'
- if the regex matches remove it.
*/


#include <stdio.h>
#include <regex.h>
regex_t regex;
int reti;
int main(){

	reti = regcomp(&regex, "\/\/[^\n\r]+?(?:\*\)|[\n\r])", 0);
	if (reti) {
    		fprintf(stderr, 'Could not compile regex\n');
    		exit(1);
	}	
	FILE *fptr;
        FILE *tmp;
	fptr = fopen('xyz.c', 'r');
	tmp = fopen('temp.c', 'a');

	char fileContent[100];
	while(fgets(fileContent, 100, fptr)){
		reti = regexec(&regex, fileContent, 0, NULL, 0);

		if(!reti){
			
		}

		if(reti == REG_NOMATCH){
		
			fprintf(tmp, fileContent); 
			
		}

	}

	
	fclose(tmp);
	fclose(fptr);
	regfree(&regex);
}
