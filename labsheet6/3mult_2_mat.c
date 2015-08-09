#include<stdio.h>
int main() {
	int m,n,p,q,i,j,k,mat1[50][50],mat2[50][50],mat3[50][50];
	printf("Enter order of Matrix one :");
	scanf("%d%d", &m,&n);
	printf("Enter order of Matrix two :");
	scanf("%d%d", &p,&q);
	printf("Enter matrix one :");
	for(i = 0; i < m ; ++i) 
		for( j = 0; j < n ; ++j)
			scanf("%d",&mat1[i][j]);
		
		printf("Enter matrix two :");
	for(i = 0; i < p ; ++i) 
		for( j = 0; j < q ; ++j)
			scanf("%d",&mat2[i][j]);
		
		printf("matrix one is :\n");
	for(i = 0; i < m;  ++i) {
		for( j = 0; j < n ; ++j)
			printf("%d ",mat1[i][j]);
		printf("\n");
	}
	
	printf("Matrix two is :\n");
	for(i = 0; i < p ; ++i) {
		for( j = 0; j < q ; ++j)
			printf("%d ",mat2[i][j]);
		printf("\n");
	}
	if(n == p) {
		printf("The product of two matrixes are :\n");
		for(i = 0; i < m ; ++i) {
			for( j = 0; j < q ; ++j) {
				for( k = 0;k < n;++k) {
				mat3[i][j] += mat1[i][k]*mat2[k][j];
				
				}printf("%d ",mat3[i][j]);
			}
			
			printf("\n");
		}
	}
	else
		printf("Matrixes cannot be multiplies");
	
}