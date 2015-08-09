#include<stdio.h>
int main() {
	int i = 0,length;
	char ar[100],tmp;
	printf("Enter a string \n");
	gets(ar);
	while(ar[i] != '\0') 
		i++;
	length = i;
	for(i = 0; i < length/2;++i) {
		tmp = ar[i];
		ar[i] = ar[length-i-1];
		ar[length-i-1] = tmp;
	}
	printf("The string is after reversing is: \n");
        puts(ar);	
	return 0;	
}