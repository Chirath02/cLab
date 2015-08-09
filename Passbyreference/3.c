#include<stdio.h> 
void ScanMatrix(int m,int c,int a[][10]); 
void DisplayMatrix(int m,int c,int a[][10]); 
int main() 
{ 
	int a[10][10]; 
	int i,j,r,c; 
	printf("enter the no.of rows and cols\n"); 
	scanf("%d%d",&r,&c); 
	ScanMatrix(r,c,a); 
	DisplayMatrix(r,c,a); 
	return 0; 
} 
void ScanMatrix( int m,int c,int a[][10]) 
{ 
	int i,j; 
	for(i=0;i<r;i++) 
		for(j=0;j<c;j++) 
			scanf("%d",&a[i][j]); 
} 
void DisplayMatrix(int m,int c,int a[][10]) 
{ 
	int i,j; 
	for(i=0;i<r;i++) 
	{ 
		printf("\n"); 
		for(j=0;j<c;j++) 
		{ 
			printf("%d\t",a[i][j]); 
		} 
	} 
} 
