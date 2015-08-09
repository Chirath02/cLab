#include<stdio.h>
int main() {
    int arr[100] ,i ,sum = 0 ,size ,element ,flag = 0;
    printf("Enter array size : ");
    scanf("%d" ,&size);
    printf("Enter the array elements : ");
    for(i = 0;i < size; ++i) 	
	scanf("%d" ,&arr[i]);
    printf("Enter element to search");
    scanf("%d" ,&element);
    for(i = 0;i < size; ++i)
	if(arr[i] == element) {
	    printf("%d found at index %d\n" ,element ,i);
	    flag = 1;
	}
    if(!flag)
	printf("sorry %d not found in array\n" ,element);
    return 0;
}