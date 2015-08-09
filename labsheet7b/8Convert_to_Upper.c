#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	int i;
	printf("Enter a String:\n");
	gets(str);
	for(i=0;i<strlen(str);++i) {
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	printf("The string now is :");
	puts(str);
	return 0;
}