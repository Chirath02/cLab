#include<stdio.h>
int main(){
    int n,i,j,a[50], min,choice,temp,item,pos;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array  ");
    for(i=0 ; i<n ; i++)
	scanf("%d", &a[i]);
    for(i=0 ; i<n ; ++i){
	for (j=i+1 ; j<n ; ++j){
	    if (a[i]>a[j]){
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	    }
	}
    }
    printf("The array after sorting : ");
    for (i=0 ; i<n ; i++)
	printf("%d  ",a[i]);
    printf("\nDo you wish to insert another element?\n1:Yes.\n0:No.  : ");
    scanf("%d",&choice);
    if(choice == 1){
	printf("Enter the number you want to insert : ");
	scanf("%d",&item);
	for(i=0 ; i<n; i++){
	    if(a[i] > item){
		pos=i;
		break;
	    }
	    if(i == n-1)
		pos=n;
	}
	for(i=n; i> pos;i--)
	    a[i] = a[i-1];
	a[pos]=item;
	printf("The modified array is :");
	for(i = 0; i <=n; i++)
	    printf("%d  ", a[i]);
	printf("\n");
    }
    return 0;
}