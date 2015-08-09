#include<stdio.h>
void sum(int,int);
void swap(int,int);
int main() {
	int a,b;
	printf("Enter two numbers \n");
	scanf("%d%d",&a,&b);
	sum(a,b);
	swap(a,b);
	return 0;
}
void sum(int a,int b) {
	printf("%d + %d = %d\n\n",a,b,a+b);
}
void swap(int a,int b) {
	int temp;
	printf("a = %d \nb = %d\n\n",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("a = %d\nb = %d\n",a,b);
}