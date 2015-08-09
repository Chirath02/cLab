#include<stdio.h>
float power(float,float);
int main() {
	float x,y;
	printf("Enter x and y \n");
	scanf("%f%f",&x,&y);
	printf("%f ^ %f is :%f \n",x,y,power(x,y));
	return 0;
}
float power(float a,float b) {
	float p = 1,i;
	for(i=0;i<b;++i)
		p*=a;
	return p;
	
}