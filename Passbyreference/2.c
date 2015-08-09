#include<stdio.h> 
void read_array(int arr[],int b);//function declaration 
void display_array(int arr[] ,int a);//function declaration 
int main() 
{ 
	int num[10],n; 
	printf("enter the size of the array:\n"); 
	scanf("%d",&n); 
	read_array(num,n);//function call 
	display_array(num,n);//function call 
	return 0; 
} 
void read_array(int arr[] ,int m) //Function header
{ //Function Body 
	int i ; 
	for(i=0;i<m;i++) 
		scanf("%d",&arr[i]); 
} 
void display_array(int arr[] ,int n) 
{ 
	int i; 
	for(i=0;i<n;i++) 
		printf("%d\n",arr[i]); 
}