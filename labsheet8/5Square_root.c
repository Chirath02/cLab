#include<stdio.h>
#include<math.h>
float square_root(float);
int main() {
	float n;
	printf("Enter a number \n");
	scanf("%f",&n);
	printf("The squart root of %f is %f \n",n,square_root(n));
	return 0;
}
float square_root(float a) {
	if(a > 0)
		return sqrt(a);
	else
		printf("Cannot find square_root of zero and negative number\n");
}