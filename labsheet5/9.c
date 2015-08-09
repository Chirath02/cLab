#include<stdio.h>
int main() {
	int arr[6] = {50,10,60,40,30,80} ,i ,small ,temp ,large ,lindex ,sindex;
	small = arr[0];
	large = arr[0];
	printf("The array is :");
	for(i = 0;i < 6; ++i)
		printf("%d " ,arr[i]);
	printf("\n");
	for(i = 0;i < 6; ++i) 
		if(small > arr[i]) {
			small = arr[i];
			sindex = i;
		}
	for(i = 0;i < 6; ++i)
		if(large < arr[i]) {
			large = arr[i];
			lindex = i;
		}
	temp = arr[sindex];
	arr[sindex] = arr[lindex];
	arr[lindex] = temp;
	printf("The array Now is :");
	for(i = 0;i < 6; ++i)
		printf("%d " ,arr[i]);	
	printf("\n");
	return 0;
}