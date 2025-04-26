/*

Q. Write a program entab that replaces strings of blanks by the minimum
number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab.
When either a tab or a single blank would suffice to reach a tab stop, which should be given
preference? 
 
------

understanding the problem statement:
we need write a program which replaces blanks with tabs and spaces and at then end it should look same thats it.

1.we get the input.
2.take the input and store it in an array called line[100].
3.itreate through it and find the blank spaces and and mark the start and end of the blank spaces.
4.calculate how many tabs and spaces we need since we already have the blank count(start-end).
5.print the line.
*/

#include <stdio.h>
#define TAB 8;

int main(){
	char line[100];
	int c;
	int count=0;
	while((c=getchar()) != EOF){
		
		int entab = 0;
			if(c == '\n'){
			entab = 1;
			for(int i=0; i<=count; i++){
				int start=0, end=0;
				if(line[i] == ' '){
				 start = i;
				 	for(int j=i; j<=count; j++){
				        	if(line[j] != ' '){
							end = j-1;
							break;	
						} 
					}
							
					int totalSpace = count;
					int totalTabs = count/TAB;
					int totalBlanks = count%TAB;
                                        for(int y=start;y<=end; y++){
						if(totalTabs !=0){
							line[y] = '\t';
							totalTabs--;
						}
						if(totalBlanks != 0){
							line[y] = ' ';
							totalBlanks--;
						}
						
					}
						
					

				}
				putchar(line[i]);
							        
				entab = 0;
						
			}


			count=0;
		}

		if(entab == 0){
		 	line[++count] = c;
				
		}
	}	
  
}
