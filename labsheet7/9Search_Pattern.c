#include<stdio.h>
#include<string.h>
int main() {
	int i = 0,j=0,c=0,length,count=0;
	char ar[100],pat[100];
	printf("Enter a string \n");
	gets(ar);
	while(ar[i] != '\0') 
		i++;
	length = i;
	printf("Enter a pattern\n");
	gets(pat);
	for(i=0;i<length;++i) {
		if(ar[i]==pat[0]) {
			c=1;
			for(j=0;j<strlen(pat);++j) {
				if(ar[i+j]!=pat[j])
					c=0;
			}
			if(c==1) {
				i+=strlen(pat);
				count++;
			}
		}
	}
	printf("The no of times the pattern repeats is %d\n",count);
	return 0;	
}