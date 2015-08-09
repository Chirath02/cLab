#include<stdio.h>
int limsum(int,int);
int main() {
	int m,n;
	printf("Enter m and n \n");
	scanf("%d%d",&m,&n);
	printf("sum of numbers from %d to %d is :%d \n",m,n,limsum(m,n));
	return 0;
}
int limsum(int a,int b) {
	int i,sum = 0;
	for(i=a; i<=b ;++i)
		sum += i;
	return sum;
	
}