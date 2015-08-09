#include<stdio.h>
float area(int,int);
int main() {
	int a,b;
	printf("Enter base and height of triangle \n");
	scanf("%d%d",&a,&b);
	printf("The area of triangle is %f\n",area(a,b));
	return 0;
}
float area(int a,int b) {
	return 0.5*a*b;
}