#include<stdio.h>
int main() {
    int a[6] = {1,2,3,4,5,6} ,b[6] = {7,8,9,10,11,12} ,i ;
    for(i = 0; i < 6; ++i) 
	printf("%d ",a[i]);
    printf("\n");
    for(i = 0; i < 6; ++i) 
	printf("%d ",b[i]);
    printf("\n\n");
    for(i = 0; i < 6; ++i) 
	printf("%d  %d\n",a[i],b[i]);
    return 0;
}