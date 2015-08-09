#include<stdio.h>
int main(){
    int a[50],i,n,item,ind;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    printf("Enter the elemets of the array (in ascending order) :");
    for(i=0 ; i<n ; ++i)
	scanf("%d",&a[i]);
    printf("Enter the element to be deleted :");
    scanf("%d",&item);
    for(i=0 ; i<n ; ++i)
	if(a[i] == item) 
	    ind=i;
	for(i=ind ; i<n ; ++i)
	    a[i]=a[i+1];
	--n;
    printf("The modified array is :");
    for(i=0 ; i<n ; ++i)
	printf("%d ",a[i]);
    printf("\n");
    return 0;
}