#include<stdio.h>
void multable(int,int);
int main() {
	int m,n;
	printf("Enter no and limit for printing multiplication table \n");
	scanf("%d%d",&m,&n);
	multable(m,n);
	return 0;
}
void multable(int a,int b) {
	int i;
	for(i=0; i<=b ;++i)
		printf("%d * %d = %d\n",a,i,a*i);
	
}