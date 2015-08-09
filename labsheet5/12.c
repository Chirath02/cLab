#include<stdio.h>
int main() {
    int arr[100] ,i ,j ,sum = 0 ,size ,flag =0;
    printf("Enter array size : ");
    scanf("%d" ,&size);
    printf("Enter the array elements : ");
    for(i = 0;i < size; ++i) 	
	scanf("%d" ,&arr[i]);
    for(i = 0;i < size; ++i)
	for(j = i+1;j < size; ++j) 
	    if(arr[i] == arr[j]) {
		printf("Elements at indexes %d and %d are equal\n" ,i ,j);
		flag =1;
	    }
    if(!flag)
	printf("No elements are equal\n");
    return 0;
}