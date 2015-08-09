#include<stdio.h>
int main() {
	char name[20];
	printf("Enter your name including your last name or initials :");
	scanf("%[^/n]",name);
	printf("\n Name :");
	printf("%s",name);
	return 0;
}