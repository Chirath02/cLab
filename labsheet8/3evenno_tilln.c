#include<stdio.h>
void even_no(int);
int main() {
	int n;
	printf("Enter a number \n");
	scanf("%d",&n);
	printf("Even numbers till %d is\n",n);
	even_no(n);
	return 0;
}
void even_no(int a) {
	int i;
	for(i=2;i<=a;i+=2)
		printf("%d ",i);
	printf("\n");
}