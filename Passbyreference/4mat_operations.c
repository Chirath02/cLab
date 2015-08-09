#include<stdio.h> 
void ScanMatrix(int m,int n,int a[][10]); 
void DisplayMatrix(int m,int n,int a[][10]); 
void sum(int a[][10],int m,int n);
void pro(int a[][10],int m,int n);
int main() 
{ 
	int a[10][10],b[10][10]; 
	int i,j,m,n,p,q; 
	printf("Enter the no.of rows and cols of 1st matrix\n"); 
	scanf("%d%d",&m,&n); 
	printf("Enter Martrix\n");
	ScanMatrix(m,n,a);  
	printf("Enter the no.of rows and cols of 2nd matrix\n");
	scanf("%d%d",&p,&q); 
	printf("Enter Martrix\n");
	ScanMatrix(p,q,b); 
	printf("\nThe Matrix one is\n");
	DisplayMatrix(m,n,a);
	printf("\nThe Matrix two is\n");
	DisplayMatrix(p,q,b); 
	return 0; 
} 
void ScanMatrix( int m,int n,int a[][10]) 
{ 
	int i,j; 
	for(i=0;i<m;i++) 
		for(j=0;j<n;j++) 
			scanf("%d",&a[i][j]); 
} 
void DisplayMatrix(int m,int n,int a[][10]) 
{ 
	int i,j; 
	for(i=0;i<m;i++) 
	{ 
		for(j=0;j<n;j++) 
			printf("%d ",a[i][j]);  
		printf("\n");
	} 
} 
void sum(int a[][10],int m,int n) {
	int i,j;
	printf("Sum of matrix :\n");
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) 
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
void pro(int a[][10],int m,int n) {
	int i,j,k;
	printf("Product of matrix :\n");
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) 
			printf("%d ",a[i][j]);
		printf("\n");
	}
}