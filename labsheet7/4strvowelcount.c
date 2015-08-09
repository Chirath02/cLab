#include<stdio.h>
int main() {
	int i = 0,c=0,length;
	char ar[100];
	printf("Enter a string \n");
	gets(ar);
	while(ar[i] != '\0') 
		i++;
	length = i;
	for(i=0;i<length;++i) {
		if(ar[i]>=65&&ar[i]<=97)
			ar[i]+=32;
	}
	for(i=0;i<length;++i) {
		if(ar[i]=='a'||ar[i]=='e'||ar[i]=='i'||ar[i]=='o'||ar[i]=='u')
			c++;
	}
	printf("The no of vowels is %d \n",c );
	
	return 0;	
}