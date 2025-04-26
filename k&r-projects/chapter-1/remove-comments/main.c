/*handle quoted strings and character constants properly. C comments don't nest. 

breakdown:
- read a file line by line
- do a regex on the line '\/\/[^\n\r]+?(?:\*\)|[\n\r])'
- if the regex matches remove it.
*/


#include <stdio.h>
#include <regex.h>
int main(){
	const char *old_name="temp.c";
	const char *new_name="xyz.c";	
	regex_t regex;

	int reti=0;

	reti = regcomp(&regex, "//.*" , 0);
	if (reti) {
    		fprintf(stderr, "Could not compile regex\n");
	}	
	FILE *fptr;
        FILE *tmp;
	fptr = fopen("xyz.c", "r");
	tmp = fopen("temp.c", "a");

	char fileContent[100];
	while(fgets(fileContent, 100, fptr)){
		reti = regexec(&regex, fileContent, 0, NULL, 0);

		if(!reti){
			
		}

		if(reti == REG_NOMATCH){
		
			fprintf(tmp, fileContent); 
			
		}

	}

    	rename(old_name, new_name);
	fclose(tmp);
	fclose(fptr);
	regfree(&regex);
}
