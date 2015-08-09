#include<stdio.h>
int small_of_3(int,int,int);
int main() {
	int a,b,c;
	printf("Enter three numbers \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("The smallest of three numbers is %d\n",small_of_3(a,b,c));
	return 0;
}
int small_of_3(int a,int b,int c) {
	return a<b?(a<c?a:c):(b<c?b:c);
}