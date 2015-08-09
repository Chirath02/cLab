#include<stdio.h>
int main() {
    int arr[100] ,revarr[100] ,size ,i ,mid,j;
    printf("Enter array size : ");
    scanf("%d" ,&size);
    printf("Enter the array elements : ");
    for(i = 0;i < size; ++i) 	
	scanf("%d" ,&arr[i]);
 
    for(i = 0,j= size-1;i < size; ++i,j--) 
	revarr[i] = arr[j];
    
    printf("Reverse array is\n");
    for(i = 0;i <size; ++i) 
	printf("%d " ,revarr[i]);
    printf("\n");
}
