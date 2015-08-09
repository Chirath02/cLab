#include<stdio.h>
void palindrome(int);
void prime(int);
void fibonacci(int);
void perfect(int);
void amstrong(int);
int main() {
	int n;
	printf("Enter a number \n");
	scanf("%d",&n);
	palindrome(n);
	prime(n);
	fibonacci(n);
	perfect(n);
	amstrong(n);
	return 0;
}
void palindrome(int a) {
	int temp,i=1,rev = 0,n=a;
	while(n!=0) {
		rev *= 10;
		rev += n%10;
		n /= 10;
	}
	if(rev == a) 
		printf("%d is a Palindrome\n",a);
	else
		printf("%d is not a Palindrome\n",a);
}
void prime(int a) {
	int i,flag=0;
	for(i=2;i<a/2;++i) 
		if(a%i == 0)
			flag = 1;
	if(flag)
		printf("%d is not a prime number\n",a);
	else 
		printf("%d is a prime number\n",a);
}
void fibonacci(int a) {
	int b=0,c=1,flag=0,temp,i;
	for(i=0;i<30;++i) {
		if(a==b||a==c)
			flag = 1;
		temp =c;
		c += b;
		b = temp;
		
	}
	if(flag) 
		printf("%d is a Fibonacci number \n",a);
	else
		printf("%d is not a Fibonacci number\n",a);
}
void perfect(int a) {
	int i,sum = 0;
	for(i=1;i<a/2;++i)
		if(a%i == 0)
			sum += i;
	if(sum == a)
		printf("%d is a perfect number\n",a);
	else
		printf("%d is not a perfect number\n",a);
}
void amstrong(int a) {
	int sum =0,i,n=a;
	while(n) {
		i = n%10;
		n /= 10;
		sum += i*i*i;
	}
	if(sum == a) 
		printf("%d is a Amstrong number\n",a);
	else 
		printf("%d is not a Amstrong number\n",a);
}