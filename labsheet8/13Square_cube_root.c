#include<stdio.h>
#include<math.h>
float squareroot(float);
float cuberoot(float);
int main() {
	float n;
	char c;
	do {
		printf("Enter a number \n");
		scanf("%f",&n);
		if(n > 0) {
			printf("The squart root of %f is %f \n",n,squareroot(n));
			printf("The cube root of %f is %f \n",n,cuberoot(n));
		}
		else
			printf("Cannot find square_root of zero and negative number\n");
		printf("\nDo you want to continue(y/n)");
		scanf(" %c",&c);	
	}while(c!='n');
	return 0;
}
float squareroot(float a) {
	return sqrt(a);
}
float cuberoot(float a) {
	return cbrt(a);
}