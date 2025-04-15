#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int min(int a, int b, int c)
{	
	if(a <= b && a <= c)
	{
		return a;
	}
	else if(b <= a && b <= c)
	{
		return b;
	}
	else if(c <= a && c <= b)
	{
		return c;
	}

    return 0;
}

int levenshtein(const char *s1, const char *s2){
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int mat[len1+1][len2+2];
    
    //create a matrix in the size of len1+len2
    for (int i=0; i<=len1; i++) mat[i][0] = i;
    for (int j=0; j<=len2; j++) mat[j][0] = j;
    //0-len fill the first row and first colum of the matrix by length

    for(int i=1; i<= len1; i++){
        for(int j=1; j<=len2; j++){
            mat[i][j] = min(
                mat[i-1][j]+1, //deletion
                mat[i][j-1]+1, //insertion
                mat[i-1][j-1] + (s1[i-1] == s2[j-1] ? 0 : 1) //substitution
            ); 
        }
    }

    

    return mat[len1][len2];

}


int main(){
    char input[100];
    char *word = "sudo";
    scanf("%s", input);
    int distance = levenshtein(word, input);
    printf("%d", distance);
}

