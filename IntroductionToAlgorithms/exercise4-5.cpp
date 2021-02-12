#include <stdio.h>

float floatingnum;     
int integer;         
char character;     

int main() {
	floatingnum = 3.0;
	integer = 3;
	character = 'X';

	printf("%f as %%d: %d\n", floatingnum, integer);
	printf("%d as %%f: %f\n", integer, floatingnum);
	printf("%c as %%d: %d\n", character, character);

	return(0);
}