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
	for(i = 0;i<m;++i)
		ar2[i] = ar[i];
	for(i = 0; i<= n;++i)
	        ar2[i+m] = ar1[i];
        puts(ar2);
	return 0;	
}