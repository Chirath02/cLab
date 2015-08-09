#include<stdio.h>
int main() {
	int i = 0,length,flag = 1;
	char ar[100],tmp;
	printf("Enter a string \n");
	gets(ar);
	while(ar[i] != '\0') 
		i++;
	length = i;
	for(i = 0; i < length/2;++i) {
		if(ar[i] != ar[length-i-1]) 
			flag = 0; 
	}
	if(flag)
		printf("Is a Palindrome\n");
	else
		printf("Not a Palindrome\n");
	return 0;		
}
