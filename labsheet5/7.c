#include<stdio.h>
int main() {
    int arr[100] ,i ,size ,small;
    printf("Enter array size : ");
    scanf("%d" ,&size);
    printf("Enter the array elements : ");
    for(i = 0;i < size; ++i) 	
	scanf("%d" ,&arr[i]);
    small = arr[0];
    for(i = 0;i < size; ++i)
	if(small > arr[i])
	    small = arr[i];
    printf("Smallest number in array is %d\n",small);	
    return 0;
}
