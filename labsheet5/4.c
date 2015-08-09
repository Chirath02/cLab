#include<stdio.h>
int main() {
    int i ,arr1[6] = {1,2,3,4,5,6} ,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i = 0;i < 6; ++i)
	arr1[i] += num;
    printf("The array now is ");
    for(i = 0;i < 6; ++i)
	printf("%d ",arr1[i]);
    printf("\n");
}