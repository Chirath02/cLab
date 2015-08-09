#include<stdio.h>
int main() {
	int i = 0,m,n;
	char ar[100],ar1[100],ar2[200];
	printf("Enter a string \n");
	gets(ar);
	while(ar[i] != '\0') 
		i++;
	m=i;
	i=0;
	printf("Enter a string \n");
	gets(ar1);
	while(ar1[i] != '\0') 
		i++;
	n=i;
	if(i==j)
		printf("The two strings are equal\n");
	else
		printf("The two strings are not equal");
	return 0;	
}