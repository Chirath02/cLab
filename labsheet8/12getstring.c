#include<stdio.h>
void get();
int main() {
	get();
	return 0;
}
void get() {
	char ch[100];
	printf("Enter a string \n");
	gets(ch);
	puts(ch);
}