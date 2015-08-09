#include<stdio.h>
int main() {
    int arr[6] = {50,10,60,40,30,80} ,i ,small ,temp;
    small = arr[0];
    printf("The array is :");
    for(i = 0;i < 6; ++i)
	printf("%d " ,arr[i]);
    for(i = 0;i < 6; ++i)
	if(small > arr[i])
	    small = arr[i];
    for(i = 0;i < 6; ++i) 
	if(arr[i] == small) {
	    temp = arr[i];
	    arr[i] = arr[0];
	    arr[0] = temp;
	}
    printf("The array Now is :");
    for(i = 0;i < 6; ++i)
	printf("%d " ,arr[i]);	
    return 0;
}
