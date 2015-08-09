#include<stdio.h>
int main() {
    float arr[100],sum=0;
    int i = 0;
    printf("Enter numbers : ");
    while(sum < 100) {
	scanf("%f" ,&arr[i]);
	sum += arr[i++];
    }
    arr[i++] = -1.0;
    printf("The array is : ");
    i = 0;
    while(arr[i] != -1)
	printf("%f " ,arr[i++]);
    printf("\n");
    return 0;
}