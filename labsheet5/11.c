#include<stdio.h>
int main() {
    int arr[100] ,i ,size ,sumofsquares = 0,sumofcubes = 0;
    printf("Enter array size : ");
    scanf("%d" ,&size);
    printf("Enter the array elements : ");
    for(i = 0;i < size; ++i) 	
	scanf("%d" ,&arr[i]);
    for(i = 0;i < size; ++i) {
	if(i%2!=0)
	    sumofsquares += arr[i] * arr[i];
	else
	    sumofcubes += arr[i] * arr[i] * arr[i];
    }
    printf("Sum of Squares of Elements at odd positions = %d\n" ,sumofsquares);
    printf("Sum of Cubes of Elements at even positions = %d\n" ,sumofcubes);
    return 0;
}