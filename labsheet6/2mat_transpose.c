#include<stdio.h>
int main() {
    int m,n,i,j,mat[50][50],trans[50][50];
    printf("Enter order of Square matrix :");
    scanf("%d%d", &m, &n);
    printf("Enter matrix :");
    for(i = 0; i < m ; ++i) 
	for( j = 0; j < n ; ++j)
	    scanf("%d",&mat[i][j]);
	
    printf("The matrix is :\n");
    for(i = 0; i < m ; ++i) {
	for( j = 0; j < n ; ++j)
	    printf("%d ",mat[i][j]);
	printf("\n");
    }
    
    printf("The Tanspose of matrix is :\n");
    for(i = 0; i < m ; i++) {
	for( j = 0; j < n ; j++) {
	    trans[i][j] = mat[j][i]; 
	    printf("%d ",mat[j][i]);
	}
	printf("\n");
    }
    printf("\n");
    
}