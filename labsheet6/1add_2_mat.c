#include<stdio.h>
int main() {
    int n,i,j,mat1[50][50],mat2[50][50],mat3[50][50];
    printf("Enter order of Square matrix :");
    scanf("%d", &n);
    printf("Enter matrix one :");
    for(i = 0; i < n ; ++i) 
	for( j = 0; j < n ; ++j)
	    scanf("%d",&mat1[i][j]);
	
    printf("Enter matrix two :");
    for(i = 0; i < n ; ++i) 
	for( j = 0; j < n ; ++j)
	    scanf("%d",&mat2[i][j]);
	
    printf("matrix one is :\n");
    for(i = 0; i < n ; ++i) {
	for( j = 0; j < n ; ++j)
	    printf("%d ",mat1[i][j]);
	printf("\n");
    }
    
    printf("Matrix two is :\n");
    for(i = 0; i < n ; ++i) {
	for( j = 0; j < n ; ++j)
	    printf("%d ",mat2[i][j]);
        printf("\n");
    }
	
    printf("The sum of two matrixes are :\n");
    for(i = 0; i < n ; ++i) {
	for( j = 0; j < n ; ++j) {
	    mat3[i][j] = mat1[i][j]+mat2[i][j];
	    printf("%d ",mat3[i][j]);
	}   
	printf("\n");
    }
    
}