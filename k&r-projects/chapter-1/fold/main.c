/*
Exercise 1-22. Write a program to ``fold'' long input lines into two or more shorter lines after
the last non-blank character that occurs before the n-th column of input. Make sure your
program does something intelligent with very long lines, and if there are no blanks or tabs
before the specified column. 

breaking down question:
1.get an input from the user.
2.store the input in some place(dynamically allocate the array with size of the buffer).
3.our max line length will be 30.
4.count the character(excludig spaces and tabs).
5.if character count exeeds 30 find the closest space and replace it with '\n' do this till our char count doesnt exceed 30.
6.Print the whole shi.

*/


#include <stdio.h>

int main(){
	int c, count=0;
	int fold=0;

	while((c = getchar())!= EOF){
	
		if((c != ' ' | c != '\t' | c != '\n') && fold == 0){
		 count++;
		 if(count > 30){
			fold = 1;
		 }
		 putchar(c);
		}

		if(fold == 1){
		 	if(c == ' ' || c == '\t'){
				c = '\n';
				putchar(c);
				count=0;
				fold=0;
		 	}
		}
	}
}
