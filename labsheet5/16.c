#include<stdio.h>
int main() {
    int a1[100] ,a2[100] ,a3[200] ,i ,j ,m ,n;
    printf("Enter Number of elements in 1st array :");
    scanf("%d" ,&m);
    printf("Enter array one :");
    for(i = 0 ;i < m ;++i)
	scanf("%d",&a1[i]);
    printf("Enter Number of elements in 2nd array :");
    scanf("%d" ,&n);
    printf("Enter array two :");
    for(i = 0 ;i < n ;++i)
	scanf("%d",&a2[i]);
    i = 0;
    printf("Array after merging is :\n");
    while(i < m+n) {
	if(i<m)
	    a3[i] = a1[i];
	else
	    a3[i] = a2[i - m];
	i++;
    }
    for(i = 0 ;i < m + n ;++i)
	printf("%d ",a3[i]);
    printf("\n");
    return 0;
}
    