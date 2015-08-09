#include<stdio.h>
int main() {
	int i = 0,index,length,option,n;
	char ar[100];
	printf("Enter a string \n");
	gets(ar);
	while(ar[i] != '\0') 
		i++;
	length = i;
	printf("\n\nEnter 1 for n characters starting from the specified index\n");
	printf("Enter 2 for last n characters\n");
	scanf("%d",&option);
	switch(option) {
		case 1:printf("Enter the index :");
		       scanf("%d",&index);
		       printf("the string is \n");
		       for(i = index-1; i < length;++i) 
		       printf("%c",ar[i]);
		       printf("\n");
		case 2:printf("Enter n:");
		       scanf("%d",&n);
		       printf("the string is \n");
		       for(i = length - n; i < length;++i) 
			       printf("%c",ar[i]);
		       printf("\n");
	}
	
	return 0;	
}