#include<stdio.h>
int main() {
	int i = 0;
	char ar[100];
	printf("Enter a string \n");
	gets(ar);
	while(ar[i] != '\0') 
		i++;
	printf("The length of string is : %d \n" ,i);	
	return 0;	
}