#include<stdio.h>
int main() {
	int arr1[100] ,arr2[100] ,arr3[100] ,i ,sum = 0 ,m ,n;
	printf("Enter array 1 size : ");
	scanf("%d" ,&m);
	printf("Enter the array 1 elements : ");
	for(i = 0;i < m; ++i) 	
		scanf("%d" ,&arr1[i]);
	printf("Enter array 2 size : ");
	scanf("%d" ,&n);
	printf("Enter the array 2 elements : ");
	for(i = 0;i < n; ++i) 	
		scanf("%d" ,&arr2[i]);
	if(m == n){
		for(i = 0;i < m; ++i)
			arr3[i] = arr1[i] + arr2[i];
	printf("Sum of two arrays is :");
	for(i = 0;i < m; ++i)
		printf("%d ",arr3[i]);
	printf("\n");
	}
	else
		printf("Error!!Two arrays ahould be equal\n");
	return 0;
}