#include <stdio.h>

int atoi(char s[])
 {
 int i, n;
 n = 0;
 for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
 n = 10 * n + (s[i] - '0');
 return n;
 } 


int main(){

	char s[100];
	int c=0,i=0,x=0,z=0;
	while((c = getchar())!=EOF){


		if(c == '\n'){
			s[x] = '\0';
			printf("%d\n", x);
			
			z = atoi(s);

			printf("%d\n", z);	

			x=0;
			i=0;
		
		
		}else{
			s[x] = c;
			x = x+1; 
		}

		
	}
	
	
}
