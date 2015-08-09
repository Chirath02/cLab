#include<stdio.h>
void scanvar();
void scanarray();
int main() {
	int choice;
	printf("\n\nEnter a Choice......\n\n");
	printf("Enter 1 to input an integer.\n");
	printf("Enter 2 to input an integer array.\n");
	scanf("%d",&choice);
	switch(choice) {
		case 1:scanvar();
		       break;
		case 2:scanarray();
		       break;
		default:printf("Wrong Choice!!!\n\n");
	}
	return 0;
}
void scanvar() {
	int a;
	printf("Enter a Integer: ");
	scanf("%d",&a);
	printf("The integer is %d\n",a);
}
void scanarray() {
	int a[100],n,i;
	printf("Enter number of elements in integer array:");
	scanf("%d",&n);
	printf("Enter The array elemets:\n");
	for(i=0;i<n;++i) 
		scanf("%d",&a[i]);
	printf("The array is \n");
	for(i=0;i<n;++i) 
		printf("%d ",a[i]);
	printf("\n");
}
