extern int i; //Declaring the variable i.
int i=25;
//Initializing the variable.
extern int i; //Again declaring the variable i.
#include <stdio.h>
int main() {
	extern int i;//Again declaring the variable i.
	printf("%d",i);
	return 0;
}