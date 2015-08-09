#include<stdio.h>
void check(char);
int main() {
	char ch;
	printf("Enter a charecter \n");
	scanf("%c",&ch);
	check(ch);
	return 0;
}
void check(char c) {
	if(c >= 'A' && c <= 'Z')
		printf("You entered a upper case letter\n");
	else if(c >='a' && c <= 'z')
		printf("You entered a lower case letter\n");
	else if(c >= '0' && c <= '9')
		printf("You entererd a  digit\n");
	else
		printf("not a letter or digit\n");
}