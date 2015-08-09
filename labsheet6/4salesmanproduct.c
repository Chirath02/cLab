#include<stdio.h>
int main() {
	int sales[5][3], i, j,sum;
	for(i = 0; i < 5; ++i) {
		printf("\nEnter the sales details of person %d :\n",i+1);
		for( j = 0 ; j < 3 ; ++j ) {
			printf("Enter sale of product %d :",j+1);
			scanf("%d",&sales[i][j]);
		}
	}
	
	for(i = 0; i < 5; ++i) {		
		sum = 0;
		for( j = 0 ; j < 3 ; ++j ) {
			sum += sales[i][j];
		}printf("\nThe sum of sales of person %d is : %d\n",i+1,sum);
	}
	for(i = 0; i < 3; ++i) {
		sum = 0;
		for( j = 0 ; j < 5 ; ++j ) {
			sum += sales[j][i];
		}printf("\nThe sum of product %d is : %d\n",i+1,sum);
	}	
	return 0;
}