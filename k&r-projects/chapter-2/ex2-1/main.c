/*
Exercise 2-1. Write a program to determine the ranges of char, short, int, and long
variables, both signed and unsigned, by printing appropriate values from standard headers
and by direct computation. Harder if you compute them: determine the ranges of the various
floating-point types. 

breaking down the question:
- get the size of char, short, int and long
- signed is nothing but a value which determines if a variable can store negative or postivive values

*/



#include <stdio.h>

int main(){
	char charType;
	int intType;
	short shortType;
	long longType;


	printf("size of char is:%d\n", sizeof(charType));
	printf("size of int is:%d\n", sizeof(intType));
	printf("size of short is:%d\n", sizeof(shortType));
	printf("size of long is:%d\n", sizeof(longType));




}
