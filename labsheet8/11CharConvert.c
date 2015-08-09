#include<stdio.h>
void convertcase(char);
int main() {
	char ch;
	printf("Enter a charecter \n");
	scanf("%c",&ch);
	convertcase(ch);
	return 0;
}
void convertcase(char c) {
	if(c >= 'A' && c <= 'Z')
		printf("%c\n",c+32);
	else
		printf("%c\n",c-32);
}