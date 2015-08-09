#include<stdio.h>
int main() {
    int arr[100] ,i ,sum = 0 ,size;
    printf("Enter array size : ");
    scanf("%d" ,&size);
    printf("Enter the array elements : ");
    for(i = 0;i < size; ++i) 	
	scanf("%d" ,&arr[i]);
    for(i = 0;i < size; ++i)
	sum += arr[i];
    printf("Average = %f\n",(float)sum/size);
    return 0;
}